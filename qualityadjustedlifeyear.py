list2 = []
num = int(input())
answer = 0
for x in range(num):
    qaly = input()
    newlist = qaly.split()
    newlist = [float(i) for i in newlist]
    answer = answer + newlist[0] * newlist[1]
print(round(answer,4))

