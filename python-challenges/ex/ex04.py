text = [' ','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9','0']
morse = [' ','.-','-...','-.-.','-..','.','..-.','--.','....','..','.---,','-.-','.-..','--','-.','---','.--.','--.-','.-.','...','-','..-','...-','.--','-..-','-.--','--..','.----','..---','...--','....-','.....','-....','--...','---..','----.','-----']
answer = []

print("==========MORSE CODE CONVERTER==========")
print("Select: \n [1] Morse to Text \n [2] Text to Morse")
while True:
    userchoice = int(input("========================================\nNumber: "))
    if userchoice in [1,2]:
        break
    else:
        print("Invalid. Please try again.")

if userchoice == 1:
    usertext = input("Please input morse code: ").split()
    for x in range(len(usertext)):
        answer.append(text[morse.index(usertext[x])])
else:
    usertext = [char for char in input("Please input text: ").upper()]
    for x in range(len(usertext)):
        answer.append(morse[text.index(usertext[x])])

print(*answer)
print("========================================")
