from math import gcd
a = int(input())
b = [int(d) for d in input().split()]

for x in range(1, a):
    print(str(int(b[0]/gcd(b[0], b[x])))+"/"+str(int(b[x]/gcd(b[0], b[x]))))
