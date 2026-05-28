module IR.Ir (irGen) where

import LangTypes
import Control.Monad.State
import Data.Map.Strict (Map)
import qualified Data.Map.Strict as Map

-- ─────────────────────────────────────────────────────────────
-- The hypergraph: nodes are PEs, edges connect them
-- ─────────────────────────────────────────────────────────────

data HG = HG
  { hgNodes :: Map NodeId PE           -- NodeId → what operation
  , hgEdges :: [(NodeId, NodeId)]      -- (producer, consumer)
  } deriving (Show)

emptyHG :: HG
emptyHG = HG Map.empty []

-- ─────────────────────────────────────────────────────────────
-- The state we thread through the whole traversal
-- ─────────────────────────────────────────────────────────────

type NodeId = Int

data IRState = IRState
  { irCounter :: Int    -- next free NodeId
  , irGraph   :: HG     -- the hypergraph being built
  } deriving (Show)

initIRState :: IRState
initIRState = IRState { irCounter = 0, irGraph = emptyHG }

-- ─────────────────────────────────────────────────────────────
-- State primitives
-- ─────────────────────────────────────────────────────────────

freshId :: State IRState NodeId
freshId = do
  s <- get
  put s { irCounter = irCounter s + 1 }
  return (irCounter s)

emitNode :: NodeId -> PE -> State IRState ()
emitNode nid op = modify $ \s ->
  let hg  = irGraph s
      hg' = hg { hgNodes = Map.insert nid op (hgNodes hg) }
  in  s { irGraph = hg' }

emitEdge :: NodeId -> NodeId -> State IRState ()
emitEdge from to = modify $ \s ->
  let hg  = irGraph s
      hg' = hg { hgEdges = (from, to) : hgEdges hg }
  in  s { irGraph = hg' }

-- ─────────────────────────────────────────────────────────────
-- The visitor: pattern match on Expr, recurse, emit nodes
-- ─────────────────────────────────────────────────────────────

visit :: Expr -> State IRState NodeId

visit (Lit n) = do
  nid <- freshId
  emitNode nid (ICONST n)
  return nid

visit (Add e1 e2) = do
  leftId  <- visit e1          -- recurse first
  rightId <- visit e2
  nid     <- freshId
  emitNode nid (IADD 32 32)
  emitEdge leftId  nid
  emitEdge rightId nid
  return nid

visit (Mul e1 e2) = do
  leftId  <- visit e1
  rightId <- visit e2
  nid     <- freshId
  emitNode nid (IMUL 32 32)
  emitEdge leftId  nid
  emitEdge rightId nid
  return nid

visit (Talos e) = visit e      -- wrapper, pass straight through

irGen :: Expr -> HG
irGen prog =
    let finalState = execState (visit prog) initIRState
    in  irGraph finalState
