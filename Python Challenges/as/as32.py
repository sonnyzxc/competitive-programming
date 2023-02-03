import random
b = [item for item in range(1, int(input("How many floors?: "))+1)]
random.shuffle(b)
print(*b,sep=" ")


