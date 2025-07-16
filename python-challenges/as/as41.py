import random
choice = ["even","odd"]
score = 0
print("Welcome to the parity game!")
for x in range(int(input("How many rounds?: "))):
    ocount = 0
    parity = []
    status = 0
    print("\nRound",x+1)
    for y in range(7):
        a = random.randint(0,1)
        if a == 1:
            ocount += 1
        parity.append(a)
    b = random.choice(choice)
    print("Is this a(n) ",b," parity: ",*parity,sep="")
    if b == "even":
        if ocount % 2 == 0:
            status += 1
    else:
        if ocount % 2 != 0:
            status += 1
    userinput = input("y/n: ")
    if userinput in ['y','Y','Yes','YES','yes']:
        if status == 1:
            print("Correct!")
            score += 1
            print("Score:",score)
        else:
            print("Incorrect!")
            print("This is because the number of 1s was",ocount)
    elif userinput in ['n','N','No','NO','no']:
        if status != 1:
            print("Correct!")
            score += 1
            print("Score:",score)
        else:
            print("Incorrect!")
            print("This is because the number of 1s was",ocount)
