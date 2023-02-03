a = [char for char in input().lower()]
ans = []
for x in a:
    if x not in ['a','e','i','o','u']:
        b = x+'o'+x
        ans.append(b)
    else:
        ans.append(x)
print(*ans,sep='')
