for _ in range(int(input())):
  for i in range(3):
    r = input()
    if '?' in r:
      con = sorted(r.replace('?', ''))
      if 'A' not in con:
        print('A')
      elif 'B' not in con:
        print('B')
      else:
        print('C')
