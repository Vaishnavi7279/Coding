# Classes and Objects in python
# every defined datatpe is a class ; every obj has data + func()
# find the type of the opject by print(type(num))
#data members- data attributes ; data functions- methods ;  objects- instances
#dir(name of the obj) : gives all the methods for that object
class Student:
# _init_ : special function/constructor that tells Python you are making a new class
# _init_ special method/constructor used to initialise data attributes (data members)
    def __init__(self,rno,name): #s1 object #self used for assigning values
        self.rno=rno
        self.name=name
    def display(self,rno,name):
        print("Name: ", name,"\nRoll no:",rno)
rno=int(input("Enter your roll call: "))
name=input("Enter your name: ")
s=Student(rno,name) #creating s as an obj of class
s.display(rno,name) #calling the display() method
