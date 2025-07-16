class Pet:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def show(self):
        print(
            f"I am {self.name} and I am {self.age} years old and I am {self.colour}")

    def speak(self):
        print("I dont't know what I say")


class Cat(Pet):
    def __init__(self, name, age, colour):
        super().__init__(name, age)  # sup() = inherit, upper level parent class
        self.colour = colour

    def speak(self):
        print("Meow")


class Dog(Pet):
    def speak(self):
        print("Bark")


class Fish(Pet):
    pass


p = Pet("Tim", 19)
# p.speak()
c = Cat("Bill", 34, "Yellow")
c.show()
# c.speak()
d = Dog("Jill", 25)
# d.show()
# d.speak()
f = Fish("Bubbles", 10)
# f.speak()
