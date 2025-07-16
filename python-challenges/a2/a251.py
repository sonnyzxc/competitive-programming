import pickle

example_dict = {
    "0000":"0",
    "0001":"1",
    "0010":"2",
    "0011":"3",
    "0100":"4",
    "0101":"5",
    "0110":"6",
    "0111":"7",
    "1000":"8",
    "1001":"9",
    "1010":"A",
    "1011":"B",
    "1100":"C",
    "1101":"D",
    "1110":"E",
    "1111":"F"
    }

a = str(input("Input your 4-bit, 8-bit or 16-bit binary number: "))

pickle_out = open("dict.pickle","wb")
pickle.dump(example_dict, pickle_out)
pickle_out.close()

pickle_in = open("dict.pickle","rb")
example_dict = pickle.load(pickle_in)
b = ""
for x in range(len(a)//4):
    split = a[(4*x):(4*x+4)]
    print(a[(4*x):(4*x+4)])
    b += example_dict[split]

print(f"\nConverted Binary: {b}")
