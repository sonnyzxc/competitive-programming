#One king One queen Two rooks Two bishops Two knights Eight pawns
bieje = input()
newlist = bieje.split()
newlist = [int(i) for i in newlist]
list2 = [1,1,2,2,2,8]
list3=[]
for x in range(0,len(list2)):
    answer = list2[x] - newlist[x]
    list3.append(answer)

print(*list3)