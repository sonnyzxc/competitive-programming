time = []
distance = []
speed = []
for x in range(int(input())):
    a = [int(i) for i in input().split()]
    time.append(a[0])
    distance.append(a[1])

for x in range(len(time)-1):
    speed.append(int((distance[x+1] - distance[x])/(time[x+1] - time[x])))

print(max(speed))
