import datetime


def timed_proc():
    while True:
        x = input("Please input: the lazy fox jumped over the brown dog \nHere:")
        if x == "the lazy fox jumped over the brown dog":
            break
        print("Error. Please try again.")


# Starts the timer, by putting the time into start_time variable
start_time = datetime.datetime.now()
timed_proc()  # Whatever you want to time
time_taken = datetime.datetime.now()-start_time  # Current time - start time
print(time_taken)  # Printing the time it took
