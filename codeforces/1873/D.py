for _ in range(int(input())):
  n, k = map(int, input().split())
  s = input()
  t = 0
  c = 0
  flag = False

  for x in s:
    if x == 'B' and not flag:
      flag = True
      t += 1

    if flag: 
      c += 1

    if c >= k:
      flag = False
      c = 0

  print(t) 