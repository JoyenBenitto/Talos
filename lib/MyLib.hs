module MyLib (
    someFunc, 
    module LangTypes
    ) where

import LangTypes

someFunc :: IO ()
someFunc = putStrLn "someFunc"
