a = input()
b = ''.join([j for i, j in enumerate(a) if j not in a[:i]])
if a == b:
    print(1)
else:
    print(0)
