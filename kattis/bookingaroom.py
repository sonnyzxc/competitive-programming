import random
room = input()
newlist = room.split()
newlist = [int(i) for i in newlist]
count = newlist[0]
roomlist = []
newroom2 = []
newroom = []

for x in range(newlist[1]):
    key = int(input())
    roomlist.append(key)
if newlist[0] == newlist[1]:
    print("too late")
else:
    for x in range(1,newlist[0]+1):
        newroom.append(x)
    for x in range(0,len(newroom)):
        if newroom[x] in roomlist:
            pass
        else:
            newroom2.append(newroom[x])
    print(random.choice(newroom2))