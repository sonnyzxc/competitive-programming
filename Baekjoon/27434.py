# AC
N = int(input())
ans = 1
for i in range(2, N + 1):
    ans *= i
print(ans)

# WA (TypeError)
print(reduce(lambda x, y: x * y, [i for i in range(1, N + 1)]))