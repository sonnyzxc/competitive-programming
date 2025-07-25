a = input().replace('+','')
l = []
for x in a:
    l.append(int(x))
l.sort()
print(*l, sep="+")
