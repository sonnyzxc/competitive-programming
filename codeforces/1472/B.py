for x in range(int(input())):
    n = int(input())
    a = [int(d) for d in input().split()]
    tc = 0
    oc = 0
    for m in a:
        if m == 1:
            oc += 1
        else:
            tc += 1
    if sum(a) % 2 == 0 and n % 2 == 0:
        print("YES")
    elif sum(a) % 2 == 0 and ((tc >= 1 and tc % 2 == 1) and (oc >= 1 and oc % 2 == 0)):
        print("YES")
    else:
        print("NO")
