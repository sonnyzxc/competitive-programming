wordlist = input().split()
wordlist.sort()

text = open("sortedlist.txt","x")
for x in range(len(wordlist)):
    text.write(wordlist[x])
    text.write("\n")
