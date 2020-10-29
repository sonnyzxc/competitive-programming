trik = input()
newlist = trik.split()
lol = [char for char in trik]
count = 1
for x in range(1,len(lol)+1):
    if count == 1:
        if lol[x-1] == "A":
            count += 1
        elif lol[x-1] == "C":
            count += 2
    elif count == 2:
        if lol[x-1] == "B":
            count += 1
        elif lol[x-1] == "A":
            count -= 1
    elif count == 3:
        if lol[x-1] == "C":
            count -= 2
        elif lol[x-1] == "B":
            count -= 1
print(count)



