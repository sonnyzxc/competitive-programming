for _ in range(int(input())):
  n = int(input())
  a = list(map(int, input().split()))

  t = 1
  added = False
  m = min(a)
  for e in a:
    if not added and e == m:
      e += 1
      added = True
    t *= e

  print(t)
