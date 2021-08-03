#dictionary has keys and values similar to list and tuples
#the key is analogous to the index ; they are like addresses, but they don't have to be integers
#They are usually characters. The values are similar to the element in a list and contain information
#To create a dictionary, we use curly brackets
#The keys are the first elements ; immutable and unique. Each key is followed by a value separated by a colon
#The values can be immutable, mutable, and duplicates
#can contain int, float, strings, lists, tuples, dictionaries, etc.
diction1={"key1": 10 , "key2": "xyz", "key3": 7.056}
diction2={"key1": 1 , "key2": "abc", "key3": ("vaish", 9), "key4": [1,2,"vaish",(2,4,"abc")], "key5": diction1}
print(diction2)
print(diction2["key2"])
# in command checks for the given key in the dictionary
print("key4" in diction2)
print("key7" in diction2)
# dict.keys() gives all the keys
print(diction2.keys())
# dict.values() gives all the keys
print(diction2.values())