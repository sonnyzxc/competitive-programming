import math
lock = []
a = [int(d) for d in input().split()]
b = [int(d) for d in input().split()]
c = [int(d) for d in input().split()]
lock.append(a)
lock.append(b)
lock.append(c)
pos = []

for x in range(10):
    for y in range(3):
        for m in range(3):
            if x == lock[y][m]:
                pos.append([y,m])
dis = 0
for x in range(1,len(pos)):
    dis = dis + math.sqrt((pos[x][0]-pos[x-1][0])**2+(pos[x][1]-pos[x-1][1])**2)
print(dis)