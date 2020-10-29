def decimalToBinary(n):  
    return bin(n).replace("0b", "")  
num = int(input())

answer = decimalToBinary(num)
reversed=''.join(reversed(answer))
    
def binaryToDecimal(n): 
    return int(n,2) 
  
if __name__ == '__main__': 
    print(binaryToDecimal(reversed)) 
