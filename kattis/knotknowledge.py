a = int(input())
b = [int(d) for d in input().split()]
c = [int(d) for d in input().split()]

print(*list(sorted(set(b) - set(c))))
