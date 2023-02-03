#create a new file (preferably on TextEdit) called 'hehe.txt'
#store it on the same folder as this python file

#writing lines into the text file
text = open("hehe.txt","w")
text.write("i like coding, but im not good thats why im doing the python challenges :D")
text.write("\nA\n A\n  A\n   A")

text.close()

#reading lines in the text file
text = open("hehe.txt","r")
content = text.read()

#counting the number of words in the file
words = content.split()
print("There are {0} words in the file :D".format(len(words)))

#taking a text file from the web
import urllib.request
url = "https://en.wikipedia.org/wiki/1812_Overture"
filelocation = "newfile.txt"

urllib.request.urlretrieve(url, filelocation)
