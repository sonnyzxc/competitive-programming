a = [char for char in input()]
b = list(set(a))
b.sort()
if b == ['4', '7']:
    print("YES")
else:
    print("NO")
