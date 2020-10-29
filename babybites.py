a = int(input())
b = input().split()
mumco = 0
for x in range(len(b)):
    if str(x+1) == b[x]:
        pass
    else:
        mumco += 1

if mumco == b.count('mumble'):
    print("makes sense")
else:
    print("something is fishy")    

