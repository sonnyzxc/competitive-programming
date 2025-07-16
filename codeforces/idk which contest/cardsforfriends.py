
for x in range(int(input())):
    a = [int(d) for d in input().split()]
    count = 1
    area = a[0] * a[1]
    while True:
        if area % 2 == 0:
            count *= 2
            area /= 2
        elif count >= a[2]:
            print("YES")
            break
        else:
            print("NO")
            break
            
            