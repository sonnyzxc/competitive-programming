first = int(input())
second = int(input())
#newlist = num.split()
#newlist = [int(i) for i in newlist]

if first > 0 and second > 0:
    print("1")
elif first < 0 and second > 0:
    print("2")
elif first < 0 and second < 0:
    print("3")
elif first > 0 and second < 0:
    print("4")