#list check
user1input = ["John Bo",65,"CompSci"]
user2input = ["John Bo",65,"CompSci"]
print(user1input == user2input)
print("")

#aliasing
prime = [2,3,5,7,11]
newprime = prime
print(newprime[3])
print("")

#playing around with list commands
mylist = []

for x in range(5):
    mylist.append(x)
print(mylist)

mylist.reverse()
print(mylist)

mylist.remove(0)
print(mylist)
print("")

#squaring integers (/elements) in an array
squaredlist = []
for x in range(len(mylist)):
    squaredlist.append(mylist[x]**2)
print(squaredlist)
print("")

#string split (into an array)
abc = "Союз нерушимый республик свободных"
print(abc.split())
print("")

#combining elements from an array to a single strinrg
print("".join(abc))
print("")

#matrix 
matrixlist = [[1,2,3],[4,5,6],[7,8,9]]
print(matrixlist[2][2])
