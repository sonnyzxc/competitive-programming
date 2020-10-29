finalans = []
x = 0
count = 0
while True:
    ans = []
    num = int(input())
    n = [int(d) for d in str(num)]
    yeet = sum(n)
    if int(num) == 0:
        break
    else:
        count = 0
        x = 10
        while count < 1:
            x += 1
            yote = [int(i) for i in str(num*x)]
            summ = sum(yote)
            if summ == yeet:
                ans.append(x)
                count = x
            else:
                pass
        finalans.append(min(ans))
        pass
for x in range(len(finalans)):
    print(finalans[x])