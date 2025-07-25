for _ in range(int(input())):
  n, k = map(int, input().split())
  a = list(map(int, input().split()))
  b = list(map(int, input().split()))
  t = 0
  # t = a[0]
  # i = 1
  print(sum(a[:k]))

  # if k > n:
  #   print(sum(a) + sum(sorted(b, reverse=True)[:k-n]))
  #   break

  # for _ in range(k-1):
  #   print(i, (b[:i]))
  #   if a[i] >= max(b[:i]):
  #     t += a[i]
  #     print("Adding: ", a[i])
  #     if i < n-1:
  #       i += 1
  #   else:
  #     print("New Adding", max(b[:i]))
  #     t += max(b[:i])

  # print(t)
