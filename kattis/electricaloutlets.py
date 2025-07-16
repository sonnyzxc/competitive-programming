for x in range(int(input())):
    a = [int(d) for d in input().split()]
    sum = 0
    for x in range(1,len(a)):
        sum += a[x]
    print(sum-a[0]+1)