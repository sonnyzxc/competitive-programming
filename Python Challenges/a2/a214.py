f = open('file1.txt')
full = []
l1 = ['ID', 'Name', 'Origin', 'Description', 'Attack', 'Magical Force',
      'Magical Defence', 'Defence', 'Intelligence', 'Health', 'Experience']
for line in f:
    a = {}
    line = line.strip()
    line = line.split(',')
    # print(line)
    c = 0
    for x in line:
        a[l1[c]] = x
        c += 1
    full.append(a)

print("===============================")
print("Welcome to the Encyclopedia!")
print("===============================")
while True:
    a = int(input("Enter ID: "))
    for x in range(1, len(l1)):
        print(str(l1[x])+":", full[a-2][l1[x]])
    print("===============================")
    b = input("Do you want to continue (y/n)?: ")
    if b == 'n':
        break
    print("===============================")

print("===============================")
print("Thank you for playing!")
print("===============================")
f.close()
