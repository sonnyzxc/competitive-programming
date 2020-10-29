autori = input()
newlist = autori.split()
lol = [char for char in autori]
list2 = []
first = lol[0]
list2.append(first)
for x in range(0,len(lol)):
    if lol[x] == '-':
        list2.append(lol[x+1])
#for i in list2:
    #print(i,end="")
print(*list2,sep='')