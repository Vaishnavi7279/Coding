#inputs a number in float
num=float(input("Enter a number: "))
num_sqrt=num**0.5 #srqts the number ; # ** evaluates the power given on right
# passes a keyworded variable length of argument to the square root func 'num_sqrt'
# *args is used to pass a non-keyworded variable-length argument list to your function
# **kwargs lets you pass a keyworded variable-length of arguments to your function
print("The square root of %0.3f is %0.3f"%(num,num_sqrt)) #prints the float value to the given decimal number