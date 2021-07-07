//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question4
#include<stdio.h>
int main()
{
    int number,absolute;
    printf("Enter number: ");
    scanf("%d",&number);
    //absolute number is the modulus or the non negative value of the given number having same magnitude
    if(number<0)
       absolute=number-(2*number);
    else
       absolute=number;
    printf("Absolute value of %d = %d",number,absolute);
    return 0;
}