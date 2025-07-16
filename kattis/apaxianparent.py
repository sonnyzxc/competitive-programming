n = input()
b = n.split()
fw = b[0]
wl = [char for char in fw]
sw = b[1]
ws = [char for char in sw]
idk = len(wl)-1
second = wl[idk-1]
l = wl[idk]
if l == 'e':
    wl.append('x')
elif l in ['a','i','o','u']:
    wl.pop(idk)
    wl.append('e')
    wl.append('x')
elif l == 'x' and second == 'e':
    pass
else:
    wl.append('e')
    wl.append('x')
for x in range(len(ws)):
    wl.append(ws[x])

new_s = "".join(wl)
print(new_s)