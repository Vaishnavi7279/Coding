#file1=open("C:\\Study Notes\\Commands.txt","r")
#print(file1.read())
file1=open("/C/Study Notes/Commands.txt","r")
print(file1.read())
name=input("Enter file:")
handle=open(name)
counts=dict() #new empty dictionary initialized
for line in handle:
    words=line.split()
    for word in words:
        counts[word]=counts.get(word,0)+1

bigcount=0
bigword=0
for word,count in counts.item():
    if bigcount is None or count > bigcount:
        bigword=word
        bigcount=count

print(bigword, bigcount)

