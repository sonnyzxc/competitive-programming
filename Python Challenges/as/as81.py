def gimmesum(mylist):
    total = 0
    for x in range(len(mylist)):
        total += mylist[x]
    return total

def gimmeproduct(mylist):
    total = 1
    for x in range(len(mylist)):
        total = total * mylist[x]
    return total

print(gimmeproduct([1,2,3]))
print(gimmesum([1,2,3,4,5,6,7,8,9,10]))
