n = int(input())
ans = []
ans2 = []
for x in range(n):
    y = input().split()
    bit = 0
    try:
        val = int(y[0])
        bit = 1
    except ValueError:
        pass
    if bit == 1:
        ans.append(int(y[0])/2)
        ans2.append(y[1])
    else:
        ans.append(int(y[1]))
        ans2.append(y[0])
ans, ans2 = zip(*sorted(zip(ans, ans2)))
for x in range(len(ans2)):
    print(ans2[x])