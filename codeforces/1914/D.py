for _ in range(int(input())):
  d = int(input())
  s = list(map(int, input().split()))
  m = list(map(int, input().split()))
  b = list(map(int, input().split()))
  t = 0

  # print([sum(x) for x in zip(s, m, b)])
  # nn = [sum(x) for x in zip(m, b)]
  # print(nn)

  # mA = max(s)
  # mM = max(m)
  # mB = max(b)

  # print([(x, nn[i]) for i, x in enumerate(s)])
  '''
  (17, 11), (5, 8)
  '''

  # sMax = max(s)
  # ss = []
  # for i, x in enumerate(s):
  #   if x == sMax:
  #     ss.append((i, m[i] + b[i]))
  # ss.sort(key=lambda x: x[1])
  # # print(ss)
  # m.pop(ss[0][0])
  # b.pop(ss[0][0])
  # t += sMax

  # mMax = max(m)
  # mm = []
  # for i, x in enumerate(m):
  #   if x == mMax:
  #     mm.append((i, b[i]))
  # mm.sort(key=lambda x: x[1])
  # b.pop(mm[0][0])
  # t += mMax

  # t += max(b)

  # print(t, sMax, mMax, max(b))
