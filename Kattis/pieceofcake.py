a = input().split()
asd = int(a[0])
b = int(a[1])
c = int(a[2])
a1 = 0
a2 = 0
if asd/2 < b:
    a1 = b
else:
    a1 = asd - b
if asd/2 < c:
    a2 = c
else:
    a2 = asd - c
print(a1*a2*4)
