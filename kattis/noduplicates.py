def count_duplicates(seq):
    return len(seq) - len(set(seq))
word = input().split()
res = count_duplicates(word)
if res == 0:
    print("yes")
else:
    print("no")