unbalanced = [char for char in input()] 
count1 = 0
count2 = 0

for x in range(len(unbalanced)):
    if unbalanced[x] == '(':
        count1 += 1
    elif unbalanced[x] == ')':
        count2 += 1

if count1 == count2:
    print("\nthe brackets are balanced")
elif count1 > count2:
    print("\nthere are more ('s by",count1-count2)
else:
    print("\nthere are more )'s by",count2-count1)        
