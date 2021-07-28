/*WAP to swap two numbers*/
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter two numbers-");
    scanf("%d %d",&number1,&number2);
    printf("__SWAPPING WITH A THIRD VARIABLE__\n");
    int variable;
    printf("First number before swap= %d\n",number1);
    printf("Second number before swap= %d\n",number2);
    variable=number1;
    number1=number2;
    number2=variable;
    printf("First number after swap= %d\n",number1);
    printf("Second number after swap= %d\n",number2);
    printf("__SWAPPING WITHOUT A THIRD VARIABLE__\n");
    printf("First number before swap= %d\n",number1);
    printf("Second number before swap= %d\n",number2);
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    printf("First number after swap= %d\n",number1);
    printf("Second number after swap= %d\n",number2);
    return 0;
}