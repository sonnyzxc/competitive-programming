fizz = input()
newlist = fizz.split()
newlist = [int(i) for i in newlist]

for x in range(1,newlist[2]+1):
    if x % newlist[0]==0 and x % newlist[1]==0:
        print("FizzBuzz")
    else:
        if x % newlist[0]==0:
            print("Fizz")
        elif x % newlist[1]==0:
            print("Buzz")
        else:
            print(x)