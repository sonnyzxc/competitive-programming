ans = []
for x in range(int(input())):
    a = input().split()
    candle = 0
    for y in range(int(a[1])):
        candle = candle + 2 + y
    ans.append(candle)
for x in range(len(ans)):
    print(x+1,ans[x])