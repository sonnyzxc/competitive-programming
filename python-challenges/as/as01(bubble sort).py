#declare the set list (with 9 randomly assigned numbers)
randomlist = [112410,622,2424,88,53,12,256,577,1205858]

for x in range(len(randomlist)):
    for y in range(len(randomlist) - 1):
        if randomlist[y] > randomlist[1+y]:
            randomlist[y], randomlist[1+y] = randomlist[1+y], randomlist[y]
print(randomlist)
