a = input().split()
l = []
a0 = [char for char in str(a[0])]
a1 = [char for char in str(a[1])]
a2 = [char for char in str(a[2])]
a3 = [char for char in str(a[3])]
a4 = [char for char in str(a[4])]
l.append(a0[0])
l.append(a1[0])
l.append(a2[0])
l.append(a3[0])
l.append(a4[0])
def most_common(lst):
    return max(set(lst), key=lst.count)
count = 0
for x in range(len(l)):
    if l[x] == most_common(l):
        count += 1
    else:
        pass
print(count)