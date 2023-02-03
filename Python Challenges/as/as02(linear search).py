def search(newlist,x):
    for m in range(len(newlist)):
        if newlist[m] == x:
            return m

print(search([1,2,3,4,5,6],6))
print(search([1,2,3,4,5,6,95,1,34,234,2352,5],0))
