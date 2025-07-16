# F = ma 
# v = u + at
# s = (u+v)*t/2

print("""\nSelect an equation
1) F = ma 
2) v = u + at
3) s = (u+v)*t/2
""")

userchoice = int(input())
if userchoice == 1:
    mass = float(input("What is the mass (in kg)?: "))
    acceleration = float(input("What is the acceleration (in ms^-2)?: "))
    finalanswer = mass * acceleration
elif userchoice == 2:
    initialspeed = float(input("What is the intial speed (in ms^-1)?: "))
    acceleration = float(input("What is the acceleration (in ms^-2)?: "))
    time = float(input("What is the change in time (in s)?: "))
    finalanswer = initialspeed + acceleration*time
else:
    initialspeed = float(input("What is the intial speed (in ms^-1)?: "))
    finalspeed = float(input("What is the final speed (in ms^-1)?: "))
    time = float(input("What is the change in time (in s)?: "))
    finalanswer = (initialspeed + finalspeed)*time/2

print(finalanswer)
