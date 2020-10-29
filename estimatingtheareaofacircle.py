ans = []
ans2 = []
import math
while True:
    a = input().split()
    if a == ['0','0','0']:
        break
    ans.append((float(a[0])**2)*math.pi)
    ans2.append(((float(a[0])*2)**2)*(int(a[2])/int(a[1])))
for x in range(len(ans)):
    print(ans[x],ans2[x])