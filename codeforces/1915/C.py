import math

for _ in range(int(input())):
  n = int(input())
  a = list(map(int, input().split()))

  if math.isqrt(sum(a)) ** 2 == sum(a):
    print("YES")
  else:
    print("NO")