num = int(input())
ans = []
newlist = []
newlist2 = []
for x in range(num):
    diff1 = input()
    newlist = [char for char in diff1]
    diff2 = input()
    newlist2 = [char for char in diff2]
    ans.append(diff1)
    ans.append(diff2)
    yeet = []
    for x in range(len(newlist)):
        if newlist[x] == newlist2[x]:
            yeet.append('.')
        else:
            yeet.append('*')
    ans.append(''.join(str(i) for i in yeet))
    ans.append('')
for x in range(len(ans)):
    print(ans[x])