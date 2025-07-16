word = input()
wordlist = [char for char in word]
count = len(wordlist)
for x in range(len(wordlist)):
    if x%3==0:
        if wordlist[x] == "P":
            count -= 1
    elif x%3==1:
        if wordlist[x] == "E":
            count -= 1
    elif x%3==2:
        if wordlist[x] == "R":
            count -= 1
print(count)