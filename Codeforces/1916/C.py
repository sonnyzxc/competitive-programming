from sys import stdin, stdout

def main():
  si = lambda : stdin.readline().strip()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  for _ in range(ii()):
    n = ii()
    a = li()

    ret = []
    # pick i, j and remove a_i, a_j
    # a.append( ((a_i + a_j) // 2) * 2)
    # masha maximises
    # olya minimise

  stdout.write(''.join(ret))

main()