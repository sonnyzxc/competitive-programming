a = [int(d) for d in input().split()]

t = 0
for x in range(a[2]):
    t += (x+1) * a[0]

if t <= a[1]:
    print(0)
else:
    print(t - a[1])
