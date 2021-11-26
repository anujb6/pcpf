import Numeric (showHex, showIntAtBase)
import Data.Char (intToDigit)

toBin :: Int -> [Int]
toBin 0 = [0]
toBin 1 = [1]
toBin n
   | n `mod` 2 == 0 = toBin (n `div` 2) ++ [0]
   | otherwise = toBin (n `div` 2) ++ [1]

main = do
putStrLn "1: decimal to binary"
putStrLn "2: decimal to hexadecimal"
putStr "choice =  "
c <- getLine
let ch = (read c :: Int)

putStr "Enter a number to covert = "
n <- getLine
let n1 = (read n :: Int)

if ch == 1
then print (toBin n1)
else putStrLn $ showHex n1 ""
	




