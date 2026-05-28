{--
A simple 1D vector library that emits a very minmial vector circuit
--}

module Benchmarks.Simple1D where

import MyLib

mac :: Expr
mac = Add (Lit 1) (Mul (Lit 2) (Lit 3))

testentry :: IO ()
testentry =do 
    putStrLn "Simple 1D vector library test entry point"
    putStrLn $ "MAC circuit: " ++ show mac
    irGen mac