l = []
ans = []
def count_duplicates(seq):
    return len(seq) - len(set(seq))
for x in range(10):
    l.append(int(input()))
for x in range(len(l)):
    b = l[x] % 42
    ans.append(b)
res = count_duplicates(ans)
print(10-res)