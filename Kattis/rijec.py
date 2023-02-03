nterms = int(input())
n1, n2 = 0, 1
count = 0
list2 = []
while count < nterms:
    nth = n1 + n2
    n1 = n2
    n2 = nth
    count += 1
    list2.append(n2)
length = len(list2)
if nterms == 1:
    print("0 1")
elif nterms == 2:
    print("1 1")
elif nterms == 3:
    print("1 2")
else:
    print(list2[length-3],list2[length-2])