answers = []

for y in range(101,1000):
    tsum = 0
    a = [int(x) for x in str(y)]
    tsum = sum(a)
    if y % tsum == 0:
        answers.append(y)
    
print(answers)
