l = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.']
finalans = []
while True:
    y = input()
    if y == '0':
        break
    else:
        tempans = []
        numans = []
        newans = []
        b = y.split()
        c = int(b[0])
        d = [char for char in b[1]]
        for x in range(len(d)):
            for y in range(len(l)):
                if d[x] == l[y]:
                    numans.append(y)
        for m in range(len(numans)):
            f = numans[m] + c
            if numans[m] + c > 27:
                g = (numans[m] + c) - 28
            else:
                g = numans[m] + c
            newans.append(g)
        for n in range(len(newans)):
            cool = newans[n]
            cool2 = l[cool]
            tempans.append(cool2)
        tempans.reverse()
        new_s = "".join(tempans)
        finalans.append(new_s)
for x in range(len(finalans)):
    print(finalans[x])
