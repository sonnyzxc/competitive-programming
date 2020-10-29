import math
num = int(input())
list2 = []
list3 = []
for x in range(1,num+1):
    newnum = int(input())
    answer = math.factorial(newnum)
    list2.append(answer)
for y in range(0,len(list2)):
    newanswer = list2[y] % 10
    list3.append(newanswer)
for i in range(0,len(list3)):
    print(list3[i])
