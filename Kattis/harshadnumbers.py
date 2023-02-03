num = int(input())
numlist = [int(d) for d in str(num)]
if num%sum(numlist)==0:
    print(num)
else:
    while True:
        if num%sum(numlist)==0:
            print(num)
            break
        else:
            num += 1
            numlist = [int(d) for d in str(num)]