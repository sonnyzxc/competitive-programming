a = input().split()
n = [int(i) for i in a]
f = n[0]
s = n[1]
t = n[2]
minimum = 100
if min(n) == f:
    minimum = f
elif min(n) == s:
    minimum = s
else:
    minimum = t
maximum = -100
if max(n) == f:
    maximum = f
elif max(n) == s:
    maximum = s
else:
    maximum = t
n.remove(maximum)
n.remove(minimum)
last = n[0]
b = input()
c = [char for char in str(b)]
ans = []
if c[0] == 'A':
    ans.append(minimum)
elif c[0] == 'B':
    ans.append(last)
elif c[0] == 'C':
    ans.append(maximum)

if c[1] == 'A':
    ans.append(minimum)
elif c[1] == 'B':
    ans.append(last)
elif c[1] == 'C':
    ans.append(maximum)

if c[2] == 'A':
    ans.append(minimum)
elif c[2] == 'B':
    ans.append(last)
elif c[2] == 'C':
    ans.append(maximum)
print(*ans)