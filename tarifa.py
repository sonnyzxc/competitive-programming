import math
num = input()
newlist = num.split()
newlist = [int(i) for i in newlist]
first = newlist[0]
second = newlist[1]
third = newlist[2]
hypotenuse = math.sqrt(third*third + second*second)+0.01
can = []
for x in range(0,first):
    match = int(input())
    if match < hypotenuse:
        can.append("DA")
    else:
        can.append("NE")
for x in range(len(can)):
    print(can[x])