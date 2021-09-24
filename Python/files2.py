#working on files in python
# 'r' for reading ; 'w' for writing ; 'a' for appending
#use the data attribute name to get the name of the file i.e. file1.name
#mode of the object using the data attribute mode i.e. file1.mode
#Using a "with" statement to open a file will run everything in the indent block, then close the file

#OPENING FILE
with open("C:\\Coding\\Python\\Hello World!.txt","r") as File1: #File1-object
# OR file1=open("C:\\Coding\\Python\\Hello World!.txt","w/r/a") 
    file_stuff=File1.read()
    file_stuff=File1.readlines() #outputs every line as an element in a list #if given a number, that many characters are printed
    print(file_stuff)
    for line in File1: #print out each line individually
        print(line)   
print(File1.closed)
print(file_stuff)

input=input()
#WRITING FILE
with open("C:\\Coding\\Python\\Hello World!.txt","w") as File2:
    File2.write(input)
    #for line in File2: #writes each line individually
        #File2.write(line)

#APPEND MODE
with open("C:\\Coding\\Python\\Hello World!.txt","a") as File2: #append()
    File2.write("\nThis is append mode")

#SOME OPERATIONS ON FILE
file=open("C:\\Coding\\Python\\Hello World!.txt","r") #opening file
for line in file: 
    print(line) #printing each line
data=file.read() #reading the data
print(len(line)) #priting the length of the data
print(data[:10]) #printing data till 10th character
for line in file:
    line=line.strip() #stripping off the spaces
    if line.startswith("Hello"):
        print(line)
for line in file:
    line=line.strip() #stripping off the spaces
    if not line.startswith("Hello"):
#in can also be used to search for something
#use try except for files that are unavailable to avoid traceback

        continue
print(file)
file.close()