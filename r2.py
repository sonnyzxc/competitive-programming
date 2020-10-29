num = (input())
newlist = num.split()
newlist = [int(i) for i in newlist]
first = newlist[0]
second = newlist[1]
if first>second:
    diff = first-second
    print(second-diff)
elif first<second:
    diff = second-first
    print(second+diff)
else:
    print(first)