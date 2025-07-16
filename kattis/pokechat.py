a = [char for char in input()]
b = input()
c = [b[i:i+3] for i in range(0, len(b), 3)] 

s = ""

for x in c:
    s += a[int(x) - 1]

print(s)