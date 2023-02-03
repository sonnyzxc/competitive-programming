#what if you added every letter of the alphabet to MCO ( new ideas for the government :) )
letter = "ABCDEFGHJIKLMNOPQRSTUVWXYZ"
text1 = "-MCO"

for x in letter:
    print(x + text1)
print("")

#checking whether a text contains a certain letter/phrase/word
print("booooo" in "boooooooooooo")
print("")

#counting letters in a string
def counting(text):
    count = 0
    for x in text:
        if x == "a":
            count += 1
    print(count)

counting("abasdibwfipqfiasdiaguauuasguashoashoaaa")
print("")

#string format (advanced)
s1 = "Hello my name is {0}!".format("boop")
print(s1)

name = "beep"
age = 60
s2 = "I am {1} and I am {0} years old.".format(age, name)
print(s2)

print("e (eulers number) to ten decimal places is {0:.10f}".format(2.71828182846))
print("")

#printing an 'advanced' letter
	
letter = """
Hello {0} {1},
 {0}, is it okay if i run for the 2020 us presidential campaign cos im a genius 200 iq fella.
 pls consider my offer i will give you $5.9 dollars yay sounds good right?

Love,
{2}
"""

print(letter.format("Donald", "Trump", "Boris Smithson"))
