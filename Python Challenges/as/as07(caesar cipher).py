letters = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

userchoice = int(input("Type 0 for encoder or 1 for decoder: "))
keyword = [char for char in input("Message: ").lower()]
shift = int(input("Shift: "))
answer = []

if userchoice == 0:
    for x in range(len(keyword)):
        pos = letters.index(keyword[x])
        newpos = (pos + shift) % 26
        answer.append(letters[newpos])
elif userchoice == 1:
    for x in range(len(keyword)):
        pos = letters.index(keyword[x])
        newpos = (pos - shift) % 26
        answer.append(letters[newpos])

print("\n",*answer,sep='')
