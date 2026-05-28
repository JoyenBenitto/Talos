module LangTypes (
    PE(..),
    Expr(..)
)where

{-- 
contains ADT required for the language specifications
--}

data PE
  = IADD    BitWidth BitWidth   -- add two integers
  | ISUB    BitWidth BitWidth   -- subtract
  | IMUL    BitWidth BitWidth   -- multiply  (latency > 1 in hardware)
  | IDIV    BitWidth BitWidth   -- divide    (latency >> 1, be careful)
  | IMOD    BitWidth BitWidth   -- modulo
  | ICONST  Int                 -- a literal constant; width inferred
  | IIDENTITY                   -- pass-through / wire tap (useful for fanout)
  deriving (Show, Eq)

type BitWidth = Int -- Basically going to be a 32 bit int for now

data Expr 
    = Talos Expr
    | Lit Int
    | Add Expr Expr
    | Sub Expr Expr
    | Mul Expr Expr
    | Div Expr Expr
    | Tap Expr          -- fanout / wire tap
    deriving (Show, Eq)
