import math
n = input().split()
n = [float(i) for i in n]
x1 = n[0]
y1 = n[1]
x2 = n[2]
y2 = n[3]
p = n[4]
d1 = (((x1-x2)**p+(y1-y2)**(1/p)))
d2 = math.sqrt((x1-x2)**2 - (y1-y2)**2)
print(d1,d2)
if d1>=d2:
    print(d1)
else:
    print(d2)
