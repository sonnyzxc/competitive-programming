a = input()
while len(a) != 1:
    b = 1
    for x in a:
        if int(x) == 0:
            continue
        b *= int(x)
    a = str(b)
print(a)