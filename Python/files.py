#working on file in python
# 'r' for reading ; 'w' for writing ; 'a' for appending
file1=open("/C/Coding/Python/Hello World!.txt","r")
file1=open("C:\\Coding\\Python\\Hello World!.txt","r")
print(file1.read())
#use the data attribute name to get the name of the file i.e. file1.name
#mode of the object using the data attribute mode i.e. file1.mode
#Using a "with" statement to open a file will run everything in the indent block, then close the file
with open("Commands.txt","r") as File1: #File1-object
    file_stuff=File1.read()
    file_stuff=File1.readlines() #outputs every line as an element in a list #if given a number, that many characters are printed
    print(file_stuff)
    for line in File1: #print out each line individually
        print(line)   
print(File1.closed)
print(file_stuff)
file1=open("/C/Coding/Python/Hello World!.txt","w") #writes file
with open("Hello World!.txt","w") as File2:
    File2.write("This is file2")
    for line in File2: #writes each line individually
        File2.write(line)
with open("Hello World!.txt","a") as File2: #append()
    File2.write("This is append mode")
    
import os
#os.mkdir("Coding")
myfile=open("Coding\Hello.txt","wt")
print("Hello people!",file=myfile)
#os.rmdir("folder")
os.path.exists("hello.txt")
print(os.path.isdir("../folder"))

#importing pandas
import pandas as pd
csv_path='fileCSV.csv'
df=pd.read_csv(csv_path)

#dataframes- comprises of rows and columns
#csv_path='fileCSV.csv'
#df=pd.read_csv(csv_path)
xlsx_path='fileXLSX.xlsx'
df=pd.read_excel(xlsx_path)
#dictin=define the dictionary
#dictin_frame=pd.DataFrame(dictin) #casting a dictionary to a datafram
#keys correspond to the table headers. The values are lists corresponding to the rows