ans = []
for x in range(int(input())):
    tempans = 1
    for y in range(int(input())-1):
        tempans = tempans*2 + 1
    ans.append(tempans)
for x in range(len(ans)):
    print(ans[x])