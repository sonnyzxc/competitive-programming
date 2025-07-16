#code to create 1-100 ipv4 and ipv6 addresses in a text file (TOOK ME LITERALLY AN HOUR HOLY MOLY)
import random
hex = ['0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F']
text = open("ipaddress.txt","x")
text.write("iPv4:\n")

y = random.randint(1,100)
for x in range(y):
    text.write("{0}.{1}.{2}.1\n".format(random.randint(1,200), random.randint(1,200), random.randint(1,200)))

text.write("\n")
text.write("iPv6:\n")

for x in range(y):
    text.write("{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}\n".format((''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4))),(''.join(random.choice(hex) for m in range(4)))))
text.close()
