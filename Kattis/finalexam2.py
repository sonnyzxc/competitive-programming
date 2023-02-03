t = 0
n = int(input())
temp = input()

for x in range(n-1):
    new = input()
    if new == temp:
        t += 1
    temp = new
print(t)
