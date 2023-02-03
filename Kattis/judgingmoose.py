yeet = input()
newlist = yeet.split()
newlist = [int(i) for i in newlist]
left = newlist[0]
right = newlist[1]

if newlist[0] == 0 and newlist[1] == 0:
    print("Not a moose")
else:
    if newlist[0] == newlist[1]:
        print("Even",newlist[0]*2)
    else:
        if left > right:
            print("Odd",left*2)
        elif left < right:
            print("Odd",right*2)