#python strings
#strings are mutuable 
d = "ABCDEFG"  
print(d[0:2]) #prints first two elements
e = 'clocrkr1e1c1t'
print(e[::2]) #prints every second element
name='vaishnavi'
print(name)
name=name.upper() #string upper func
print(name)
name=name.lower() #string lower func
print(name)
print(len(name)) #strlen func
a=name[::3] #prints every third element
print(a) 
print(name[2:5]) #prints element from index 2 to 5
sur='srivastava'
name=name+sur #adds both the string. string concatenation
print(name)
print(3*name) #prints the name three times
name='vaish'
name=name+' sri' #adds both the string. string concatenation
print(name)
b=name.replace('ish','anu') #string copy/replace. replaces 'ish' with 'anu'
print(name)
print(b)