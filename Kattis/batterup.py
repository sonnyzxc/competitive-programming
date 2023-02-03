bottom = int(input())
top = input()
newlist = top.split()
count = 0
newlist = [int(i) for i in newlist]
for x in range(0,len(newlist)):
    if newlist[x] == -1:
        count += 1
top = sum(newlist)
answer = (top+count)/(bottom-count)
print(answer)