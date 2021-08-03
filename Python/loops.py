#for loop
num=[1,2,3,4,5]
sum=0
size=int(input("Enter size: "))
for i in range(0,size):
    print(i)
for i in range(0,size):
    sum=i+sum
print("Sum=",sum)
for i,j in enumerate(num):
    print(i,j)

#while loop
i=0
num1=[]
while(i<5):
    num1.append(num[i])
    i+1
print(num)
   
