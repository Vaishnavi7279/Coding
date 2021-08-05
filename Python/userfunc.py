#user-defined functions
#variables inside func: scope till the function
#variables outside func: globally declared
#if variable not declared locally, global variable is used
#function for addition with arguments and a return type
def addition(a,b):
    sum=a+b
    return sum
x=int(input("Input the first number: "))
y=int(input("Input the second number: "))
print("DIRECT CALL// Sum=", addition(x,y))
z=addition(x,y)
print("CALL THROUGH VARIABLE// Sum=", z)

def none():
    pass #indicates to do and return nothing
print(none())

#function employing loop and collecting arguments
def names(*name):
    for i in name:
        print(i)
names("Vaishnavi","Somansh","Rittika","Shrey")
names()
