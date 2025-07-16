vowels = 'ae'

for _ in range(int(input())):
  n = int(input())
  s = input()
  ret = list(s)
  count = -1
  for i in range(2, len(s)):
    if s[i] in vowels:
      ret.insert(i + count, ".")
      count += 1

  print("".join(ret))