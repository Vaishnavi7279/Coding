//Lab Experiment 6 Ques 1b - reversing and checking co prime//
#include<stdio.h>
void coprime(int num)
{
    int temp, hcf,rem, sum=0, x, y;
    printf("The number recieved is - %d\n",num);
    temp=num;    
    x=num;
    while(num>0)    
      {    
        rem=num%10;    
        sum=(sum*10)+rem;    
        num=num/10;    
      }
    y=sum;
    printf("The reversed number is - %d\n",y);
	for(int i=1 ; i<=x ; i++)
	   {
	     if(x%i==0 && x%i==0)
	       {
	         hcf = i;
	       }
	   }
	if(hcf == 1)
	   {
	     printf("%d and %d are CO-PRIME NUMBERS.", x, y);
	   }
	else
	   {
	     printf("%d and %d are NOT CO-PRIME NUMBERS.", x, y);
	   }
}
void main()
{
    int num;
    printf("Enter the number-");
    scanf("%d", &num);
    coprime(num);
}