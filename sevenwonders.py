l = input()
l = [char for char in l]
tcount = 0
ccount = 0
gcount = 0
ans = 0
for x in range(len(l)):
    if l[x] == 'T':
        tcount += 1
    elif l[x] == 'C':
        ccount += 1
    else:
        gcount += 1
total = (tcount**2)+(ccount**2)+(gcount**2)
check = []
check.append(tcount)
check.append(ccount)
check.append(gcount)
print(total+7*min(check))