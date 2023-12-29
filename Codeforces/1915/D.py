vowels = 'ae'
consonants = 'bcd'

'''
syllabies: CV, CVC

bacedbab
 _ _  _ 

bacedbab


'''
for _ in range(int(input())):
  n = int(input())
  s = input()
  ret = ""
  flag = False
  for c in s[::-1]:
    ret += c
    if flag:
      ret += "."
      flag = False
    if c in vowels:
      flag = True

  if ret[-1] == ".":
    ret = ret[:-1]

  print(ret[::-1])
