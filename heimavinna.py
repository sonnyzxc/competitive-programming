a = input()
p = [0]

for x in range(len(a)):
    if a[x] == ';':
        p.append(x)
p.append(len(a))

t = 0
for x in range(len(p)-1):
    b = a[p[x]:p[x+1]]
    c = b.replace(';','')
    if '-' in c:
        p1 = c.index('-')
        n1 = c[0:p1]
        n2 = c[p1+1:len(c)]
        t += (int(n2) - int(n1) + 1)
    else:
        t += 1
print(t)
