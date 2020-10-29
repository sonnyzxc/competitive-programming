num1 = input()
newlist1 = num1.split()
newlist1 = [int(i) for i in newlist1]
#
num2 = input()
newlist2 = num2.split()
newlist2 = [int(i) for i in newlist2]
#
num3 = input()
newlist3 = num3.split()
newlist3 = [int(i) for i in newlist3]
#
num4 = input()
newlist4 = num4.split()
newlist4 = [int(i) for i in newlist4]
#
num5 = input()
newlist5 = num5.split()
newlist5 = [int(i) for i in newlist5]
avg1 = sum(newlist1)/len(newlist1)
avg2 = sum(newlist2)/len(newlist2)
avg3 = sum(newlist3)/len(newlist3)
avg4 = sum(newlist4)/len(newlist4)
avg5 = sum(newlist5)/len(newlist5)
totalll = []
totalll.append(sum(newlist1))
totalll.append(sum(newlist2))
totalll.append(sum(newlist3))
totalll.append(sum(newlist4))
totalll.append(sum(newlist5))
average = []
average.append(avg1)
average.append(avg2)
average.append(avg3)
average.append(avg4)
average.append(avg5)
maximum = 0
position = 0
for x in range(0,5):
    if average[x] > maximum:
        maximum = average[x]
        position = x
print(position+1,totalll[position])