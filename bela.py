l = ['A','K','Q','J','T','9','8','7']
ld = [11,4,3,20,10,14,0,0]
nd = [11,4,3,2,10,0,0,0]
total = 0
a = input().split()
for x in range(int(a[0])*4):
    b = input()
    c = [char for char in str(b)]
    d = l.index(c[0])
    if c[1] == a[1]:
        total = total + ld[d]
    else:
        total = total + nd[d]
print(total)
