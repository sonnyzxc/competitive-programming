from sys import stdin, stdout

def main():
  si = lambda : stdin.readline().strip()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  for _ in range(ii()):
    b, a = mi()
    bs = li()
    p = 1
    for x in bs:
      p *= x

    # print("DIVMOD: ", 2023 / p, 2023 % p)
    # print("CHECK: ", 2023 / p == 2023 // p)
    calc = 2023//p
    if 2023/p == calc:
      ret = []
      print('YES')
      if calc == 1:
        for _ in range(a):
          ret.append('1')
      else:
        for _ in range(a):
          if calc == 1:
            ret.append('1')
            continue

          for fac in [2023, 289, 119, 17, 7, 1]:
            if calc % fac == 0:
              calc = calc // fac
              ret.append(f'{fac}')
              break

      print(" ".join(ret))
    else:
      print("NO")


main()
