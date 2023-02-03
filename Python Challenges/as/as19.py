#times table (up to 20)
def multiplier(n):
    for i in range(1, 21):
        print(n * i, end="   ")
    print()

for i in range(1, 21):
    multiplier(i)
