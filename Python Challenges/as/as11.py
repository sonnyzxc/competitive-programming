import random

choice = ['ILike','Mydadlikes','Mymomlikes','Mysisterlikes','Mybrotherlikes','Mydoglikes']
ranobject = ['dogs','cats','toys','ipads','games','balls']

ranphrase = []
ranphrase.append(random.choice(choice))
ranphrase.append(random.choice(ranobject))
ranphrase.append(random.randint(100,999))

print("Your Random Passphrase is: ",*ranphrase,sep="")
