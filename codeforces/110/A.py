from sys import stdin, stdout

def main():
  si = lambda : stdin.readline()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  t = 0
  s = list(map(str, si().strip()))
  for c in s:
    if c == '4' or c == '7':
      t += 1

  check = "".join(sorted(list(set(list(map(str, str(t)))))))
  stdout.write('YES\n' if (check ==  '47' or check == '4' or check == '7') else 'NO\n')

main()
