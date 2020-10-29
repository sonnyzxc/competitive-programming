datum = input()
newlist = datum.split()
newlist = [int(i) for i in newlist]
d = newlist[0]
m = newlist[1]
ans = 0
if m == 1:
    if d > 3:
        ans = (d-3)%7
    elif d<=3:
        ans = 7-((3-d)%7)
elif m == 2:
    if d > 28:
        ans = (d-28)%7
    elif d<=28:
        ans = 7-((28-d)%7)
elif m == 3:
    if d > 14:
        ans = (d-14)%7
    elif d<=28:
        ans = 7-((14-d)%7)
elif m == 4:
    if d > 4:
        ans = (d-4)%7
    elif d<=4:
        ans = 7-((4-d)%7)
elif m == 5:
    if d > 9:
        ans = (d-9)%7
    elif d<=9:
        ans = 7-((9-d)%7)
elif m == 6:
    if d > 6:
        ans = (d-6)%7
    elif d<=28:
        ans = 7-((6-d)%7)
elif m == 7:
    if d > 11:
        ans = (d-11)%7
    elif d<=11:
        ans = 7-((11-d)%7)
elif m == 8:
    if d > 8:
        ans = (d-8)%7
    elif d<=28:
        ans = 7-((8-d)%7)
elif m == 9:
    if d > 5:
        ans = (d-5)%7
    elif d<=5:
        ans = 7-((5-d)%7)
elif m == 10:
    if d > 10:
        ans = (d-10)%7
    elif d<=10:
        ans = 7-((10-d)%7)
elif m == 11:
    if d > 7:
        ans = (d-7)%7
    elif d<=7:
        ans = 7-((7-d)%7)
elif m == 12:
    if d > 12:
        ans = (d-12)%7
    elif d<=12:
        ans = 7-((12-d)%7)
days = ['Saturday','Sunday','Monday','Tuesday','Wednesday','Thursday','Friday','Saturday']
print(days[ans])