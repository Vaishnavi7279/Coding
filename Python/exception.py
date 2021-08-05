#exception handling
#interpreter works on try block to execute the set of statements
try:
    getfile=open("myfile","r")
    getfile.write("File for exception handling")
#since the file cannot be found or accessed
# an error occured and the compiler jumped to the except block to solve that error instead of terminating the program
except IOError:
    print("Unable to open or read the file")
#for some error that is not caught by the IO error
except:
    print("Some other error") #does not define where is the error
#add the else statement to check otherwise
else:
    print("Program successfully executed")
#final conclusion
finally:
    getfile.close()
    print("File successfully closed!")