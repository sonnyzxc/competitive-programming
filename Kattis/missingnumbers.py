num = []
for x in range(int(input())):
    num.append(int(input()))
num.sort()
ans = []
for x in range(1,max(num)+1):
    if x not in num:
        ans.append(x)
if len(ans) == 0:
    print("good job")
else:
    print(*ans,sep="\n")

            