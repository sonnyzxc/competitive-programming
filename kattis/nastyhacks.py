numbertimes = int(input())
list2 = []
for x in range(1,numbertimes+1):
    hacks = input()
    newlist = hacks.split()
    newlist = [int(i) for i in newlist]
    first = newlist[0]
    second = newlist[1]
    third = newlist[2]
    newsum = first + third
    if newsum < second:
        list2.append(0)
    elif newsum == second:
        list2.append(1)
    elif newsum > second:
        list2.append(2)
    
for y in range(0,len(list2)):
    if list2[y] == 0:
        print("advertise")
    elif list2[y] ==1:
        print("does not matter")
    elif list2[y] ==2:
        print("do not advertise")

#0 = advertise, 1 = does not matter, 2 = do not advertise