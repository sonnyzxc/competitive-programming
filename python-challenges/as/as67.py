import random

cards = ['phoenix','jett','viper','sova','cypher','brimstone','sage','omen','breach','raze']
looks_score = [85,99,40,50,95,20,45,100,10,35]
abililities_score = [50,30,5,35,60,90,100,80,95,80]

p1cards = []
p2cards = []
p1points = 0
p2points = 0

for x in range(5):
    p1cards.append(random.choice(cards))
    p2cards.append(random.choice(cards))

print("============TOP TRUMPS (VALORANT EDITION)============")
print("(FIRST ONE TO 3 POINTS WINS!)")
for x in range(10):
    print("[Character]",cards[x],"[Looks]",looks_score[x],"[Abilities]",abililities_score[x])
print("=====================================================")
print("Player 1 Cards:",*p1cards)
print("Player 2 Cards:",*p2cards)
print("=====================================================")

for x in range(5):
    p1temp = 0
    p2temp = 0 
    print("\n[Player 1's Turn]")
    p1choice = input("\nPlease select a card: ").lower()
    p1choice2 = input("\nPlease select a category (Looks/Abilities): ")
    if p1choice2 in ['looks','look','Looks','LOOKS','LOOK','Look']:
        p1temp = looks_score[cards.index(p1choice)]
        print("\nPlayer 2:")
        p2counter = input("Choose a card: ").lower()
        p2temp = looks_score[cards.index(p2counter)]
        if p1temp > p2temp:
            print("\nPlayer 1 Wins This Round!")
            p1points += 1
        elif p2temp < p1temp:
            print("\nPlayer 2 Wins This Round!")
            p2points += 1
        else:
            print("\nTie!")
    elif p1choice2 in ['abilities','Abilities']:
        p1temp = abililities_score[cards.index(p1choice)]
        print("\nPlayer 2:")
        p2counter = input("Choose a card: ").lower()
        p2temp = looks_score[cards.index(p2counter)]
        if p1temp > p2temp:
            print("\nPlayer 1 Wins This Round!")
            p1points += 1
        elif p2temp < p1temp:
            print("\nPlayer 2 Wins This Round!")
            p2points += 1
        else:
            print("\nTie!")
    p1temp = 0
    p2temp = 0         
    print("\n[Player 2's Turn]")
    p2choice = input("\nPlease select a card: ").lower()
    p2choice2 = input("\nPlease select a category (Looks/Abilities): ")
    if p2choice2 in ['looks','look','Looks','LOOKS','LOOK','Look']:
        p2temp = looks_score[cards.index(p2choice)]
        print("\nPlayer 1:")
        p1counter = input("Choose a card: ").lower()
        p1temp = looks_score[cards.index(p1counter)]
        if p1temp > p2temp:
            print("\nPlayer 1 Wins This Round!")
            p1points += 1
        elif p2temp < p1temp:
            print("\nPlayer 2 Wins This Round!")
            p2points += 1
        else:
            print("\nTie!")             
    elif p1choice2 in ['abilities','Abilities']:
        p2temp = abililities_score[cards.index(p2choice)]
        print("\nPlayer 1:")
        p1counter = input("Choose a card: ").lower()
        p1temp = looks_score[cards.index(p1counter)]
        if p1temp > p2temp:
            print("\nPlayer 1 Wins This Round!")
            p1points += 1
        elif p2temp < p1temp:
            print("\nPlayer 2 Wins This Round!")
            p2points += 1
        else:
            print("\nTie!")

print("=====================================================")
if p1points > p2points:
    print("\nPlayer 1 Has Won The Game!")
elif p2points < p1points:
    print("\nPlayer 2 Has Won The Game!")
else:
    print("Both Players Have Tied!")
