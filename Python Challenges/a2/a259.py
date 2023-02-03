from math import comb
# binomial theorem
print("(a + bx)^c")
a = int(input("Input integer value of a: "))
b = int(input("Input integer value of b: "))
c = int(input("Input integer value of c: "))
print("=========================================")
print(a**c, end="")
for x in range(1, c+1):
    print(" +", str(comb(c, x) * (a**(c-x)) * (b**x)) + "x^"+str(x), end="")
