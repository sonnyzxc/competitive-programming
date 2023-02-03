ans = 0
lookingfor = ['rose','pink']
for x in range(int(input())):
    a = input().lower()
    if 'rose' in a:
        ans += 1
    elif 'pink' in a:
        ans += 1
if ans == 0:
    print("I must watch Star Wars with my daughter")
else:
    print(ans)