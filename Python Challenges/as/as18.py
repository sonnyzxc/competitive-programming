day = ['Monday','Tuesday','Wednesday','Thursday','Friday','Saturday','Sunday']

def day_name(x):
    if 1<=x<=7:
        print(day[x-1])
    else:
        print("None")

#test runs
day_name(2)
day_name(6)
day_name(7)
day_name(41)
