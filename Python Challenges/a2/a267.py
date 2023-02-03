from time import sleep


def binarysearch(arr, target):
    low = 0
    high = len(arr) - 1
    while low <= high:
        mid = (low + high) // 2
        if target == arr[mid]:
            return mid
        elif target < arr[mid]:
            high = mid - 1
        else:
            low = mid + 1
    return -1


my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
my_target = 11

if binarysearch(my_list, my_target) == -1:
    print("Target not found.... Trying again...")
    sleep(2)
    if binarysearch(my_list, my_target) == -1:
        print("Target not found!")
    else:
        print("Target found")
        binarysearch(my_list, my_target)
