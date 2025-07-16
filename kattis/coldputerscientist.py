num = input()
sci = input()
newlist = sci.split()
newlist = [int(i) for i in newlist]
count = 0
for x in range(0,len(newlist)):
    if newlist[x] < 0:
        count += 1
print(count)