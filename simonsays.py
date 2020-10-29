num = int(input())
ans = []
for x in range(num):
    tempans = []
    simon = input().split()
    if simon[0] == 'Simon' and simon[1] == 'says':
        for x in range(2,len(simon)):
            tempans.append(simon[x])
            new_s = " ".join(tempans)
        ans.append(new_s)
for x in range(len(ans)):
    print(ans[x])