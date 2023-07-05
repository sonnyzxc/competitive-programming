i = [int(d) for d in input().split()]
a = i[0]
b = i[1]
t = 0

while a <= b:
    a *= 3
    b *= 2
    t += 1

print(t)
