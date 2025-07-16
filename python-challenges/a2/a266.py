from matplotlib.pyplot import ylabel, plot, show, xlabel, title
import math
x = [2, 4, 6, 8, 10, 12]
y = [2, 2, 2, 2, 2, 2]
y1 = [2, 4, 6, 8, 10, 12]  # Try this for Linear complexity
y2 = []  # log
y3 = []  # quadratic
y4 = []  # exponential
y5 = []  # factorial

# logarithmic complexity
for m in x:
    y2.append(math.log(m))
    y3.append(m**2)
    y4.append(2**m)
    y5.append(math.factorial(m))


print(y2, y3, y4, y5, sep='\n')
plot(x, y2, 'b')
plot(x, y3, 'g')
plot(x, y4, 'r')
# plot(x, y5, 'y')
xlabel('Inputs')
ylabel('Steps')
title('Constant Complexity')
show()
