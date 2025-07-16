import random
cards = ['A','2','3','4','5','6','7','8','9','10','J','Q','K']
values = [0,2,3,4,5,6,7,8,9,10,10,10,10]
playercards = []
dealercards = []
playervalue = 0
dealervalue = 0
acount = 0
fakedealercards = ['CONCEALED']

for x in range(2):
    playercards.append(random.choice(cards))
    dealercards.append(random.choice(cards))
fakedealercards.append(dealercards[1])

print("============BLACKJACK============")
print("Your cards:",*playercards,"\n")
print("Dealer's cards:",*fakedealercards)
print("=================================")

for x in range(2):
    playervalue += values[cards.index(playercards[x])]
    dealervalue += values[cards.index(dealercards[x])]

while True:
    playerchoice = input("Hit or Stand?: ")
    if playerchoice in ['hit','HIT','Hit']:
        playercards.append(random.choice(cards))
        playervalue += values[cards.index(playercards[2])]
        break
    elif playerchoice in ['stand','STAND','Stand']:
        break
    else:
        print("Invalid Reponse. Please Try Again.")

if 'A' in playercards:
    for x in range(len(playercards)):
        if 'A' == playercards[x]:
            acount += 1
    if acount == 1:
        if 21-(playervalue+10) >= 0:
            playervalue += 10
        else:
            playervalue += 1
    else:
        if 21-(playervalue+10+1) >= 0:
            playervalue += 11
        else:
            playervalue += 2

print("=================================")
if playervalue > 21:
    print("\nBUST. YOU LOSE.")
elif playervalue == 21:
    print("\nVICTORY. CONGRATULATIONS.")
elif playervalue < dealervalue:
    print("\nDEALER WINS. YOU LOSE.")
elif playervalue == dealervalue:
    print("DRAW. NO ONE WINS.")
else:
    print("\nYOU WIN. CONGRATULATIONS.")
