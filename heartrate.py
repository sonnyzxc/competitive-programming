num = int(input())
ans = []
for x in range(num):
    lol = input()
    newlist = lol.split()
    newlist = [float(i) for i in newlist]
    time = newlist[1]
    yeet = 60/time
    heart = (60*newlist[0])/newlist[1]
    ans.append(round(heart-yeet,4))
    ans.append(round(heart,4))
    ans.append(round(heart+yeet,4))
for x in range(len(ans)):
    if x%3==0:
        print(ans[x],ans[x+1],ans[x+2])
    else:
        pass