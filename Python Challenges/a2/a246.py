import random

number = random.randint(1, 111)
l = []
for x in range(112):
    l.append(x)


def binarysearch(number, list):
    cycle = 1
    low = 0
    high = len(list) - 1
    while low <= high:
        mid = (low + high) // 2
        if list[mid] == number:
            return cycle
        elif list[mid] < number:
            low = mid + 1
        else:
            high = mid - 1
        cycle += 1


print("My automated number is", number)
print("It took me", binarysearch(number, l), "cycles to find it")
