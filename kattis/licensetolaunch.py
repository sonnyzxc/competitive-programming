useless = int(input())
newlist = input().split()
newlist = [int(i) for i in newlist]
list2 = []
lowest = 1000000
for x in range(useless):
    if newlist[x] < lowest:
        lowest = newlist[x]
        list2.append(x)
print(max(list2))