mylist = [1,1,2,3,4,5,6,1,2,5,5]
newlist = []

for x in range(len(mylist)):
    if mylist[x] not in newlist:
        newlist.append(mylist[x])

print(newlist)
