s = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
     'U', 'V', 'W', 'X', 'Y', 'Z']

for x in range(int(input())):
  a = input()
  c = input()

  t = 0
  for i, x in enumerate(s):
    if c.count(x) >= i+1:
      t += 1

  print(t)
