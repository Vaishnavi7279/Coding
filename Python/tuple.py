#assigning tuple
#tuples are immutable ordered sequence represented by ()
#tuples can contains int, float, strings and other tuples
#elements accessed like arrays
#slicing ;  negative indexes possible ; -1 last element
#aliasing- multiple variable refering to same tuple ;  allowed
Tupleee=("Vaishnavi", 9, 3, ("Srivastava", 10, 20), 18, "girl")
print(Tupleee[1:3]) #prints elements from 1 to 3 : SLICING
print(Tupleee[1:5]) #prints elements from 1 to 5
tuple1=("vaish", 9)
tuple2=("Sriva", 18, tuple1) #nested tuples #nesting as tree
print(tuple2)
print(Tupleee[3][0]) #print the first element of the third element
print(Tupleee[3][0][6]) #print the sixth character of the first element of the third element
x=Tupleee[3][0].upper()
print(x)
tuple3=Tupleee #aliasing
tuple3[2]=30 #tuples immutuable therefore changes not allowed
print(Tupleee)
help(Tupleee) #gives help regarding other operations