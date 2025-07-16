string = 'FBI'
list2 = []
ans = []
for x in range(5):
    string2 = str(input())
    list2.append(string2)
    if string in list2[x]:
        ans.append(x+1)
if len(ans) > 0:
    print(*ans)
else:
    print("HE GOT AWAY!")