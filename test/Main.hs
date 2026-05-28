module Main (main) where

import Benchmarks.Simple1D

main :: IO ()
main = do
    putStrLn "====== Test suite ======"
    testentry
    putStrLn "All tests passed!"
