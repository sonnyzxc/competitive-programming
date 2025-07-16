num = int(input())
finalans = []
def find_duplicate(nums):
    dublicates = []
    nums.sort()
    for i in range(len(nums)-1):
       if nums[i] == nums[i+1]:
          dublicates.append(nums[i])
    return dublicates
t2 =[]
for x in range(num):
    tans = []
    a = int(input())
    b = input().split()
    tans = find_duplicate(b)
    for x in range(len(b)):
        if b[x] in tans:
            pass
        else:
            t2.append(int(b[x]))
for x in range(len(t2)):
    print("Case #%s"%(''+str(x+1)+':'),t2[x])