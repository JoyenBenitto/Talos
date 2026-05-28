
module IR.Ir (
    irGen
) where

import LangTypes
import Control.Monad

data HG = HG -- Placeholder for the hypergraph representation of the IR

{--
The temp keeps track of the current temporary variable
--}

data IRState = IRIntrim  Int
    Hypergraph HG
    deriving (Show, Eq)

visit :: Expr -> IO ()
visit (Talos expr) = visit expr
visit (Lit n) = putStrLn $ "Literal: " ++ show n
visit (Add e1 e2) = do
    putStrLn "Addition:"
    visit e1
    visit e2
visit (Sub e1 e2) = do
    putStrLn "Subtraction:"
    visit e1
    visit e2
visit (Mul e1 e2) = do
    putStrLn "Multiplication:"
    visit e1
    visit e2
visit (Div e1 e2) = do
    putStrLn "Division:"
    visit e1
    visit e2
visit (Tap e) = do
    putStrLn "Tap (fanout):"
    visit e 

irGen :: Expr -> IO ()
irGen prog = do
    putStrLn $ show prog
    visit prog
    putStrLn "IR emission not yet implemented."