denary = [int(x) for x in str(input("Input Denary: "))]
binary = ['0000','0001','0010','0011','0100','0101','0110','0111','1000','1001']
newbinary = []
for x in range(len(denary)):
    newbinary.append(binary[denary[x]])

print(*newbinary,sep='')
