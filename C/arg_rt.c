/*WAP to show function calling with argument and a return type*/
#include<stdio.h>
int sum(int number1,int number2)
{
    int s;
    s=number1+number2;
    printf("The sum= %d",s);
    return 0;
}
int main()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    sum(number1,number2);
    return 0;
}