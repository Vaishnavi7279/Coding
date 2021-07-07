/*WAP to determine different datatypes*/
#include<stdio.h>
int main()
{
    int integer;
    printf("Enter an integer number-");
    scanf("%d",&integer);
    printf("The integer number is- %d\n",integer);
    float float1;
    printf("Enter a float number-");
    scanf("%f",&float1);
    printf("The float number is- %f\n",float1);
    double double1;
    printf("Enter a double number-");
    scanf("%f",&double1);
    printf("The double number is- %f\n",double1);
    char character;
    printf("Enter a character-");
    scanf("%c",&character);
    printf("The character is- %c\n",character);
    return 0;
}