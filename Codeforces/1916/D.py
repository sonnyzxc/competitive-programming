from sys import stdin, stdout
import math

# TLE

def main():
  si = lambda : stdin.readline().strip()
  ii = lambda : int(stdin.readline())
  mi = lambda : map(int, stdin.readline().split())
  li = lambda : list(map(int, stdin.readline().split()))
  i2c = lambda n: chr(ord('a') + n)
  c2i = lambda c: ord(c) - ord('a')

  for _ in range(ii()):
    n = ii()
    if n == 1:
      print("1")
      continue

    d = {}
    start = int('1' + '0' * (n - 1))
    end = int ('9' * n)
    for x in range(start, end + 1):
      val = math.isqrt(x)
      if x == val * val:
        key = "".join(sorted(list(map(str, str(x)))))
        if key in d:
          d[key].append(str(x))
          if len(d[key]) + 1 == n:
            # print(d[key])
            print("\n".join(d[key]))
            break
        else:
          d[key] = [str(x)]

    # for k, v in d.items():
    #   print(k, v)

main()