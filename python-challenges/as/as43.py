letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
           'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
num = []
for x in range(26):
    num.append(0)

for x in [char for char in input("Enter your text here: ")]:
    if x == ' ':
        continue
    num[letters.index(x.lower())] += 1

newlist = sorted(zip(num, letters), reverse=True)[:3]
print("Our Agent 102858 has discovered that the three most frequently appeared character are:")
for x in range(3):
    print(newlist[x][1], "| it appears ", newlist[x][0], " times")
