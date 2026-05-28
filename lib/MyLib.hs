module MyLib (
    someFunc, 
    module LangTypes,
    module IR.Ir
    ) where

import LangTypes
import IR.Ir

someFunc :: IO ()
someFunc = putStrLn "someFunc"
