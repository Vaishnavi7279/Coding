/*WAP to swap two numbers*/
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    printf("__SWAPPING WITH A THIRD VARIABLE__");
    int variable;
    printf("First number before swap= %d",number1);
    printf("Second number before swap= %d",number2);
    variable=number1;
    number1=number2;
    number2=variable;
    printf("First number after swap= %d",number1);
    printf("Second number after swap= %d",number2);
    printf("__SWAPPING WITHOUT A THIRD VARIABLE__");
    printf("First number before swap= %d",number1);
    printf("Second number before swap= %d",number2);
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    printf("First number after swap= %d",number1);
    printf("Second number after swap= %d",number2);
    return 0;
}