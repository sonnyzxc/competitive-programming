from sys import stdin, stdout

def main():
  si = lambda : stdin.readline()
  ii = lambda : int(stdin.readline())

  n = ii()
  wins = si().strip()
  aw, dw = 0, 0
  for w in wins:
    if w == 'A':
      aw += 1
    else:
      dw += 1

  if aw == dw:
    stdout.write('Friendship\n')
  elif aw > dw:
    stdout.write('Anton\n')
  else:
    stdout.write('Danik\n')

main()
