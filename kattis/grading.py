a = [int(d) for d in input().split()]
b = int(input())

if b >= a[0]:
    print("A")
elif b >= a[1]:
    print("B")
elif b >= a[2]:
    print("C")
elif b >= a[3]:
    print("D")
elif b >= a[4]:
    print("E")
else:
    print("F")
