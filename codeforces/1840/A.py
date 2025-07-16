for x in range(int(input())):
    l = int(input())
    a = input()
    ans = ""
    active = False
    for i in a:
        if not active:
            temp = i
            active = True
        else:
            if temp == i:
                ans += i
                active = False
    print(ans)