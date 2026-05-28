{--
A simple 1D vector library that emits a very minmial vector circuit
--}

module Benchmarks.Simple1D where

import MyLib

testentry  = do
    let mac = Add (Lit 1) (Mul (Lit 2) (Lit 3))
    let ir  = irGen mac
    putStrLn "MAC IR:"
    print ir
