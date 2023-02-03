userinput = str(input("Input String: "))
count1 = 0
count2 = 0
count3 = 0
for x in userinput:
    if x.lower() in ['a','e','i','o','u']:
        count1 += 1

repeated = [char for char in userinput]
for x in range(len(repeated)-1):
    if repeated[x] == repeated[x+1]:
        count2 += 1
    temp = repeated[x].lower()+repeated[x+1].lower()
    if temp in ['ab','cd','pq','xy']:
        count3 += 1

if count1 >= 3 and count2 > 0 and count3 == 0:
    print("Nice String!")
else:
    print("Naughty String!")
