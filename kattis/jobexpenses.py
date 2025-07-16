a = int(input())
b = input().split()
total = 0
for x in range(a):
    if int(b[x]) < 0:
        total = total + int(b[x])
print(abs(total))