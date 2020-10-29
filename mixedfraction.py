f = []
s = []
t = []
while True:
    frac = input()
    newlist = frac.split()
    newlist = [int(i) for i in newlist]
    if newlist == [0,0]:
        break
    else:
        t.append(newlist[1])
        second = newlist[0] % newlist[1]
        s.append(second)
        first = int((newlist[0]-second)/newlist[1])
        f.append(first)
for x in range(0,len(f)):
    print(f[x],s[x],"/",t[x])



