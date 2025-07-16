import math
import random
import time

print("\n"*10)


def clearlines():
    print("=========================================")


class Character:
    def __init__(self, name, attack, defence, health):
        self.name = name
        self.attack = attack
        self.defence = defence
        self.health = health

    def print_basics(self):
        print("Name: ", self.name)
        print("Attack: ", self.attack)
        print("Defence: ", self.defence)
        print("Health: ", self.health)

    def attackaction(self, damage):
        print(self.name + " attacks for " + str(damage) + " damage." + '\n')
        self.health -= damage

    def defendaction(self, damage):
        print(self.name + " defends for " + str(damage) + " damage.")
        self.health -= damage

    def healaction(self, heal):
        print(self.name + " heals for " + str(heal) + " health.")
        self.health += heal

    def check_health(self):
        if self.health <= 0:
            return False
        else:
            return True


clearlines()
print("Welcome to the RPG Game!" + "\n")
time.sleep(1.5)
print("You will be facing an ADVANCED AI bot. Best of luck!" + "\n")
time.sleep(1.5)
print("But first... you will need to create your character.")
clearlines()
charactername = input("Input Character Name: ")
clearlines()
print("Now, our fair algorithm will choose your character's stats.")
print("\nLoading", end="")
time.sleep(1)
print(".", end="")
time.sleep(1)
print(".", end="")
time.sleep(1)
print(".", end="\n")
clearlines()
print("Your character's stats are:")
char1 = Character(charactername, random.randint(1, 10),
                  random.randint(1, 10), random.randint(1, 10))
char1.print_basics()
clearlines()
print("Chapter 1: Sugondese Waterdeep" + "\n")
time.sleep(1.5)

print("/////////ENEMEY APPROACHING/////////")
print("a wild DeeDee has appeared!" + "\n")

fight = input("Do you want to fight? (y/n): ")
if fight == "y":
    char2 = Character("DeeDee", random.randint(1, 10),
                      random.randint(1, 10), random.randint(1, 10))
    print("You have chosen to fight!" + "\n")
    time.sleep(1)
    print("/////////FIGHT/////////" + "\n")
    time.sleep(1)
    char2.print_basics()
    time.sleep(1)

    while char1.check_health() and char2.check_health():
        char1.attackaction(random.randint(1, 10))
        char2.defendaction(random.randint(1, 10))
        time.sleep(1)
        char2.print_basics()
        time.sleep(1)
        char2.attackaction(random.randint(1, 10))
        char1.defendaction(random.randint(1, 10))
        time.sleep(1)
        char1.print_basics()
        time.sleep(1)
    if char1.check_health():
        print("\n" + "You have won the fight!")
    else:
        print("\n" + "You have lost the fight!")
else:
    print("\n" + "If you are not brave enough to fight DeeDee, you are not brave enough to play the game!")
    clearlines()

clearlines()
time.sleep(1)
print("Thank you for playing the game!")
