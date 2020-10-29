import math
faktor = input()
newlist = faktor.split()
newlist = [int(i) for i in newlist]

f = newlist[0]
s = newlist[1] - 1 + 0.00009
print(math.ceil(f*s))