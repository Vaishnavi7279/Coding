//Palindrome numbers in C
#include<stdio.h>
//function for checking if the given number if palindrome or not 
int check_palindrome(int num)
{
  int temp, rem, sum=0, flag;
  temp=num;
  while(temp>0)    
    {    
      rem=temp%10;  //calculating the remainder each time after diving by 10
      sum=(sum*10)+rem;    //adding the remainder at respective places of ones, tens, etc. => num reversed
      temp=temp/10;    //diving the number with 10 so one digit is getting reduced every time
    }
  //checking if the reversed number=the given number
  if(sum==num)
    flag=1;
  else
    flag=0;
  return flag;
}
//function to create palindrome numbers till a given limit
void create_palindrome(int num)
{
  int rem, temp, sum;
  for(int i=0 ; i<=num ; i++)
     {
       temp=i;
       sum=0;
       while(temp>0)
        {
           rem=temp%10;
           sum=(sum*10)+rem;
           temp=temp/10; 
        }
       if(sum==i)
         printf("%d, ", i);
       else
         continue;
     }
}
//main function
int main()
{
  //taking user's input if the number has to be checked or series of palindrome numbers have to be created
  int function;
  printf("Enter '1' to check if the given number is Palindrome or not\n");
  printf("Enter '2' to create Palindrome numbers till a limit\n");
  scanf("%d", &function);
  int num;
  if(function==1)
    {
      printf("Enter the number to be checked: \n");
      scanf("%d", &num);
      //function calling
      int flag=check_palindrome(num);
      if(flag==1)
        printf("%d is Palindrome", num);
      else
        printf("%d is not a Palindrome", num);
    }
  else if(function==2)  
    {
      printf("Enter the limit: \n");
      scanf("%d", &num);
      //function calling
      create_palindrome(num);
    }
  return 0;
}