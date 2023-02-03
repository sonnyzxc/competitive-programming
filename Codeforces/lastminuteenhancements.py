for x in range(int(input())):
    t = 0
    a = int(input())
    l = [int(d) for d in input().split()]
    for y in range(len(l)):
        if len(set([l[y]]) & set(l)) > 1:
            if len((set(l[y]+1)) & set(l)) == 0:
                t += 1
        elif len(set([l[y]+1]) & set(l)) == 1 and len(set([l[y]+2]) & set(l)) == 0:
            t += 1
    na = set(l)
    t += len(na)

    print("t value",t)


