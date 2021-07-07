/*WAP to show function calling with argument but no return type*/
#include<stdio.h>
void sum(int number1,int number2)
{
    int s;
    s=number1+number2;
    printf("The sum= %d",s);
}
void main()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    sum(number1,number2);
}