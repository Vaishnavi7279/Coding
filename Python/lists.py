#lists- ordered sequence ; mutuable ; represented by []
#tuples can contains int, float, strings, tuples, lists and other data structures
#elements accessed same as lists
#slicing ;  negative indexes possible ; -1 last element
#aliasing- multiple variable refering to same list ;  allowed
lists=[1,2,"vaish",(2,4,"abc")]
lists.extend(["Sriva",18]) #extend() adding the list ; concatenation ie adds the elements as two elements
print(lists)
lists.append([0,9,8]) #append() adds the given list as one single element represented by []
print(lists) 
del(lists[1]) #deletes the element on the first index
print(lists)
strg="Vaishnavi is a girl"
list2=strg.split() #converts every element of the given string to an element of the list. In sum, split() converts string to list
print(list2)
list3="v,a,is,h".split(",") #converts the given string to list by seprating the elements by , to the elements of the list
print(list3) 
list4=lists #aliasing
list4[0]=10 #modification on one causes modification in other
print(lists)
list5=lists[:] #list5 carries clone/copy of the original list ; not referring to the original list
list5[0]=100 #modification on one DOESNT cause modification in other
print(lists)
print(list5)
help(list5) #gives help regarding other operations