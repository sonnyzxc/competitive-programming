time = input()
newlist = time.split()
newlist = [int(i) for i in newlist]
answer = newlist[1] - 45
list2 = []
if newlist[0] > 0:
    if answer < 0:
        answer2 = newlist[0] - 1
        list2.append(answer2)
        answer3 = 60 + answer
        list2.append(answer3)
    elif answer > 0:
        list2.append(newlist[0])
        list2.append(answer)
    print(*list2)
elif newlist[0] == 0:
    if answer < 0:
        list2.append(23)
        answer3 = 60 + answer
        list2.append(answer3)
    elif answer > 0:
        list2.append(newlist[0])
        list2.append(newlist[1])
    print(*list2)