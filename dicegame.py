gunnar = input()
newlist = gunnar.split()
newlist = [int(i) for i in newlist]

emma = input()
newlist2 = emma.split()
newlist2 = [int(i) for i in newlist2]

yeet = sum(newlist)
yeet2 = sum(newlist2)

if yeet > yeet2:
    print("Gunnar")
elif yeet == yeet2:
    print("Tie")
else:
    print("Emma")