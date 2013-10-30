main = print $ show(sum(filter problem001 [1..999]))

problem001 x = (x `mod` 3) == 0 || (x `mod` 5) == 0