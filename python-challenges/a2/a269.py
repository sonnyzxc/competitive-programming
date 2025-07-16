import os

filename = input("Input file name including file type (e.g. file1.txt): ")

try:
    f = open(filename)
except:
    print(f"File not found. Is it in the right director? \n\nCurrent directory: {os.getcwd()}\n\n")
