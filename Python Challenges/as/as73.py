import random
favcolour = input("Favourite Colour: ")
favplace = input("Favourite Place: ")
favanimal = input("Favourite Animal: ")
symbol = ['!','@','£','$']
print(favplace+favanimal+random.choice(symbol))
