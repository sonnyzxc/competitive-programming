dice = input()
newlist = dice.split()
newlist = [int(i) for i in newlist]
print(newlist)
dicelist = []
first = newlist[0]
second = newlist[1]
if first == second:
    print(first+1)
if first > second:
    for i in range(second+1, first+2):
        print (i)
if second > first:
  for i in range(first+1, second+2):
    print (i)