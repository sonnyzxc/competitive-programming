cost = float(input())
num = int(input())
lol = 0
for x in range(num):
    seed = input()
    newlist = seed.split()
    newlist = [float(i) for i in newlist]
    lol = lol + newlist[0] * newlist[1]
print(round(lol*cost,7))