a = input()

if len(a) == 1 or a[1:].isupper():
    a = a.swapcase()
print(a)
