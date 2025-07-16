import sys
for i in sys.stdin:
    a,b = [int(d) for d in i.split()]
    print(abs(a-b))

