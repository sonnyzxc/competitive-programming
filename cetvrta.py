y = input()
n = y.split()
n = [int(i) for i in n]
y2 = input()
n2 = y2.split()
n2 = [int(i) for i in n2]
y3 = input()
n3 = y3.split()
n3 = [int(i) for i in n3]
count =0
ans = []
if n[0] == n2[0]:
    count += 1
elif n[0] == n3[0]:
    count += 1
else:
    ans.append(n[0])
if n2[0] == n[0]:
    count += 1
elif n2[0] == n3[0]:
    count += 1
else:
    ans.append(n2[0])
if n3[0] == n[0]:
    count += 1
elif n3[0] == n2[0]:
    count += 1
else:
    ans.append(n3[0])
if n[1] == n2[1]:
    count += 1
elif n[1] == n3[1]:
    count += 1
else:
    ans.append(n[1])
if n2[1] == n[1]:
    count += 1
elif n2[1] == n3[1]:
    count += 1
else:
    ans.append(n2[1])
if n3[1] == n[1]:
    count += 1
elif n3[1] == n2[1]:
    count += 1
else:
    ans.append(n3[1])
print(*ans)