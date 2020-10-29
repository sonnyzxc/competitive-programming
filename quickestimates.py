count = int(input())
list2 = []
for x in range(count):
    work = input()
    newlist = work.split()
    newlist = [int(i) for i in work]
    list2.append(len(newlist))
for x in range(0,count):
    print(list2[x])

