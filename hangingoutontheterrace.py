a = input().split()
total = 0
error = 0
for x in range(int(a[1])):
    b = input().split()
    if b[0] == 'enter':
        if int(b[1]) + total > int(a[0]):
            error+=1
        else:
            total = total + int(b[1])
    elif b[0] == 'leave':
        total = total - int(b[1])
print(error)

