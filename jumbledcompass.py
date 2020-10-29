current = int(input())
target = int(input())

if current > target: 
    clockwise = (360-current) + target
    anti = current-target
    mov2neg = anti*-1
    if clockwise < anti:
        print(clockwise)
    elif anti < clockwise:
        print(mov2neg)
    else:
        print(clockwise)

if current < target:
    clockwise = target - current
    anti = current + (360-target)
    mov2neg = anti*-1
    if clockwise < anti:
        print(clockwise)
    elif anti < clockwise:
        print(mov2neg)
    else:
        print(clockwise)

if current == target:
    print("0")