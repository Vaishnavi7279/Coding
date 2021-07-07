/*WAP to show function calling with no argument but a return type*/
#include<stdio.h>
int sum()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    int s;
    s=number1+number2;
    return s;
}
int main()
{
    int s;
    s=sum();
    printf("The sum= %d",s);
    return 0;
}