a = input().split()
b = input().split()
c = input().split()
d = input().split()
sum = 0
for x in range(len(b)):
    sum = sum + int(b[x])
for x in range(len(c)):
    sum = sum + int(c[x])    
newlist = []
for x in range(len(d)):
    newlist.append(int(d[x]))
sum = sum + min(newlist)
if sum >= int(a[1]):
    print("no")
else:
    print("yes")