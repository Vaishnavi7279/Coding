#include<stdio.h>
void main()
{
    int num;
    printf("Enter the number-");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
      printf("%d is divisible by 2 & 3", num);
    else 
      printf("%d is not divisible by 2 & 3", num);
}