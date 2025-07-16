num = int(input())
possible = []
for x in range(num):
    seq = input()
    newlist = seq.split()
    newlist = [int(i) for i in newlist]
    a = newlist[0]
    b = newlist[1]
    c = newlist[2]
    if a+b==c:
        possible.append('Possible')
    elif a-b==c or b-a==c:
        possible.append('Possible')
    elif a*b==c:
        possible.append('Possible')
    elif a/b==c or b/a==c:
        possible.append('Possible')
    else:
        possible.append('Impossible')
for x in range(len(possible)):
    print(possible[x])