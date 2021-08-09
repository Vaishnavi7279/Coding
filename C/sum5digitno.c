//HackerRank Problem- find the sum of the digits of a 5 digit number
#include<stdio.h>
int main()
{
    int num,temp,sum=0,rem;
    scanf("%d",&num);
    if(num>99999)
      printf("ERROR: Not a 5 digit number");
    temp=num;
    while(temp>0)
      {
          rem=temp%10;
          sum=sum+rem;
          temp=temp/10;
      }
    printf("%d",sum);
}