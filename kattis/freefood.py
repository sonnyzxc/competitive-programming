a = int(input())
ans = []
def count_duplicates(seq):
    return len(seq) - len(set(seq))
for x in range(a):
    b = input()
    c = b.split()
    c = [int(i) for i in c]
    for x in range(c[0],c[1]+1):
        ans.append(x)
res = count_duplicates(ans)
print(len(ans)-res)
