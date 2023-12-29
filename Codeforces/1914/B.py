for _ in range(int(input())):
  n, k = map(int, input().split())
  l = [x for x in range(1, n+1)]
  print(*(l[:k] + l[k:][::-1]))