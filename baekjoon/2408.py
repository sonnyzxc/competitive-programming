exp = ""
for _ in range(int(input() * 2 - 1)):
    exp += input()
print(eval(exp.replace("/", "//")))