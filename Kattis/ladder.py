import math
num = input()
newlist = num.split()
newlist = [int(i) for i in newlist]
height = newlist[0]
angle = math.radians(newlist[1])
hyp = (height)/(math.sin(angle))
print(math.ceil(hyp))