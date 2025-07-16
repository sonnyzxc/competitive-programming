#scuffed hangman (python ver.)
import random
wordlist = ['pear','orange','grape','melon','mango','peach','plum']
word = random.choice(wordlist)
brokenup = [char for char in word]
hidden = []
for x in range(len(brokenup)):
    hidden.append("_")
lives = 8

for x in hidden:
        print(x, end=" ")
print("")
while True:
    if lives == 0:
        print("You have lost D:")
        break
    else:
        if hidden.count("_") == 0:
            print("\n----------------------------------")
            print("| Congratulations! You have won. |")
            print("----------------------------------\n")
            break
        else:
            print("\nLives left:",lives)
            letterguess = str(input("Guess your letter: "))
            if letterguess in brokenup:
                for x in range(brokenup.count(letterguess)):
                    position = brokenup.index(letterguess)
                    hidden[position] = letterguess
                for x in hidden:
                    print(x, end=" ")
                print("")
            else:
                for x in hidden:
                    print(x, end=" ")
                print("")
                lives -= 1
