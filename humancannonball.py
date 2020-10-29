num = int(input())
g = 9.81
import math
safelist = []
for x in range(num):
    chicken = input()
    newlist = chicken.split()
    newlist = [float(i) for i in newlist]
    v0 = newlist[0]
    theta = newlist[1]
    x1 = newlist[2]
    h1 = newlist[3]
    h2 = newlist[4]
    angle = math.radians(theta)
    value1 = x1/(v0*math.cos(angle))
    h = (v0*value1*math.sin(angle)) - (g*value1**2)/2
    if h-1>=h1 and h+1<=h2:
        safelist.append('Safe')
    else:
        safelist.append('Not Safe')
for x in range(len(safelist)):
    print(safelist[x])

