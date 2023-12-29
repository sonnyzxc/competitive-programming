for _ in range(int(input())):
  n = int(input())
  a = list(map(int, input().split()))
  o, e = [], []
  lSum, rSum = 0, 0

  for i, x in enumerate(a):
    if (i + 1) % 2 == 1:
      lSum += x
    else:
      rSum += x

  l, r = 0, len(a) - 1
  while l < r:
