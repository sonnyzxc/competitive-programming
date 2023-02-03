num = int(input())
realans = 0
finalans = 0
for x in range(num):
    slist = []
    list2 = []
    ans = 0
    pot = input()
    yeet = [char for char in pot] 
    for x in range(len(yeet)):
        list2.append(int(yeet[x]))
    for x in range(len(list2)-1):
        slist.append(list2[x])
    for x in range(len(slist)):
        ans = ans + ((slist[x])*10**(len(slist)-x))/10
        finalans = int(ans)
    realans = realans + finalans**list2[len(list2)-1]
print(realans)