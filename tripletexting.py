a = input()
ans1 = []
ans2 = []
ans3 = []
for x in range(len(a)//3):
    ans1.append(a[x])
for x in range(len(a)//3):
    ans2.append(a[x+(len(a)//3)])    
for x in range(len(a)//3):
    ans3.append(a[x+2*(len(a)//3)])    
str = ""
a1 = str.join(ans1)
a2 = str.join(ans2)
a3 = str.join(ans3)
if a1==a2:
    print(a1)
elif a2==a3:
    print(a2)
else:
    print(a3)