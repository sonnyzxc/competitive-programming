import random

alphabet = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
alphabet2 = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
encrypted = []

random.shuffle(alphabet)

userphrase = [char for char in input().upper()]
for x in range(len(userphrase)):
    pos = alphabet.index(userphrase[x])
    encrypted.append(alphabet2[pos])

print(*encrypted, sep='')
