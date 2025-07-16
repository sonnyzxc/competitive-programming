chicken = input()
newlist = chicken.split()
newlist = [int(i) for i in newlist]
first = newlist[0]
second = newlist[1]
if (second-first) == 1:
    print("Dr. Chaz will have 1 piece of chicken left over!")
elif (first-second) == 1:
    print("Dr. Chaz needs 1 more piece of chicken!")
elif first<second:
    newnum = second - first
    print("Dr. Chaz will have",newnum,"pieces of chicken left over!")
elif first>second:
    newnum = first - second
    print("Dr. Chaz needs",newnum,"more pieces of chicken!")