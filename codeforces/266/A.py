n = int(input())
s = [char for char in input()]
t = 0

for x in range(len(s) - 1):
    if s[x] == s[x+1]:
        t += 1

print(t)
