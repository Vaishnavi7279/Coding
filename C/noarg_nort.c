/*WAP to show function calling with no argument and no return type*/
#include<stdio.h>
void sum()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    int s;
    s=number1+number2;
    printf("The sum= %d",s);
}
void main()
{
    sum();
}