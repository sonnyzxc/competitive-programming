from sys import stdin, stdout

si = lambda : stdin.readline()
ii = lambda : int(stdin.readline())
mi = lambda : map(int, stdin.readline().split())
li = lambda : list(map(int, stdin.readline().split()))
i2c = lambda n: chr(ord('a') + n)
c2i = lambda c: ord(c) - ord('a')

def main():
  for _ in range(ii()):
    n, m = mi()
    ns = li()
    ms = li()
    '''
    ns.sort(reverse=True)
    ms.sort(reverse=True)

    s = min(n, m)
    if m > n:
      stdout.write(f'{sum(ms[:s])}\n')
    else: # m <= n
      stdout.write(f'{sum(ns[:len(ns) - s]) + sum(ms)}\n')
    '''
    for x in ms:
      ns[ns.index(min(ns))] = x
    stdout.write(f'{sum(ns)}\n')

main()
