lmao = input()
newlist = lmao.split()
first = newlist[0]
second = newlist[1]
r1=''.join(reversed(first))
r2=''.join(reversed(second))
if r1 > r2:
    print(r1)
elif r1 < r2:
    print(r2)
else:
    print(r1)