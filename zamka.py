num1 = int(input())
num2 = int(input())
num3 = int(input())
maximum = -100000
minimum = 100000

for x in range(num1,num2+1):
    newans = [int(d) for d in str(x)]
    if sum(newans) == num3:
        if x > maximum:
            maximum = x
        if x < minimum:
            minimum = x
print(minimum)
print(maximum)