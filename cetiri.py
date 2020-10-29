a = input().split()
b = []
for x in range(len(a)):
    b.append(int(a[x]))
b.sort()
c = abs(b[1]-b[0])
d = abs(b[2]-b[1])
if c==d:
    print(b[2]+(c))
elif c<d:
    print(b[1]+c)
elif c>d:
    print(b[0]+d)