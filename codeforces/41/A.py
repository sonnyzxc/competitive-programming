from sys import stdin, stdout

def main():
  si = lambda : stdin.readline().strip()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  stdout.write('YES\n' if si() == si()[::-1] else 'NO\n')

main()