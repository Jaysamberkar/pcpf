mergList [][]z = reverse z
mergList (x:xs)[] z= mergList xs[](x:z)
mergList [](y:ys) z= mergList []ys(y:z)
mergList (x:xs) (y:ys) z= if x<=y then 
                        mergList xs (y:ys) (x:z) else 
                        mergList (x:xs) ys (y:z)

main = print(mergList[0,6,9,11][1,4,8,13,30][])