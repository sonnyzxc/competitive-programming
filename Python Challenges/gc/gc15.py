a = "        1"
print(a)
for i in range(2, 10):
    a = a[1:]
    print(a + str(i) + a[::-1])
    a += str(i)
for i in range(7):
    a = " " + a[0:len(a) - 1]
    b = a[::-1]
    print(a + b[1::])
print("        1")
