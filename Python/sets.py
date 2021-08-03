#sets are unordered collections {}
#can contain int, float, strings, lists, tuples, dictionaries, etc.
#have unique elements
sets={1,2,3,4,1,2,5,6,7,8}
print(sets) #does not allow duplicate elements
#can convert a list to a set by using the function set #type casting
#use the list as the input to the function set. The result will be a list converted to a set
lists=[1,2,"vaish",(2,4,"abc"),1]
list1=set(lists) #type-casting
print(type(list1))
print(list1)
sets.add("Sriva") #adding element
print(sets)
sets.remove(2) #deleting element
print(sets)
print(1 in sets) #checks the value in the set
set2={2,4,6,9,10,9,9,6}
print(sets & set2) # gives the intersection i.e. the common elements
set3=set.union(sets) # gives the union i.e. the common elements
print(set3)
print(set2.issubset(sets)) #checks if set2 is a subset of sets