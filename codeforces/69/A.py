from sys import stdin, stdout

def main():
  si = lambda : stdin.readline()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  xSum, ySum, zSum = 0, 0, 0

  for _ in range(ii()):
    x, y, z = mi()
    xSum += x
    ySum += y
    zSum += z

  stdout.write('YES\n' if (xSum == 0 and ySum == 0 and zSum == 0) else 'NO\n')

main()