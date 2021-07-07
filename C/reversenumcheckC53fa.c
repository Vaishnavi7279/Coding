//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question1
#include<stdio.h>
int main()    
{    
  int number,rem,sum=0,temp;    
  printf("Enter a five digit number: ");    
  scanf("%d",&number);    
  temp=number;    
  while(number>0)    
    {    
      rem=number%10;    
      sum=(sum*10)+rem;    
      number=number/10;    
    }    
  //printf("%d %d %d",number,sum,temp);
  if(temp==sum)    
    printf("Reverse of %d = %d => Reverse of the number equals the number\n",temp,sum);    
  else    
    printf("Reverse of %d = %d => Reverse of the number is not equal the number\n",temp,sum);
  return 0;  
}