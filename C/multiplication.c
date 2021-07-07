#include<stdio.h>
int main()
{
    int num1,num2,product=0;
    printf("Enter two numbers to be multiplied-");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num2;i++)
       {
           product=product+num1;
       }
    printf("Product=%d",product);
    return 0;
}