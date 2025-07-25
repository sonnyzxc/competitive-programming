from sys import stdin, stdout

def main():
  vowels = 'ae'

  for _ in range(int(stdin.readline())):
    n = int(stdin.readline())
    s = stdin.readline()
    ret = []
    for i, c in enumerate(s):
      if i + 1 < n and i != 0:
        if s[i+1] in vowels:
          ret.append(f'.{c}')
          continue
      ret.append(c)

    stdout.write("".join(ret))

main()
