ans = []
while True:
    num = int(input())
    if num == -1:
        break
    else:
        speed = []
        time = []
        tempans = []
        for x in range(num):
            total = 0
            n = input().split()
            n = [int(i) for i in n]
            speed.append(n[0])
            time.append(n[1])
        for x in range(len(speed)):
            if x==0:
                tempans.append(speed[0]*time[0])
            else:
                tans = abs(time[x]-time[x-1])*speed[x]
                tempans.append(tans)
        ans.append(sum(tempans))
for x in range(len(ans)):
    print(ans[x],'miles')