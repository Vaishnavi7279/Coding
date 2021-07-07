#include<stdio.h>
void main()
{
    int number1,number2,number3;
    printf("Enter the values of the three number");
    scanf("%d %d %d",&number1,&number2,&number3);
    if(number1>number2) 
      {
          if(number1>number3)
            printf("%d is the greatest of the three number",number1);
      }
    else if(number2>number1)   
      {
          if(number2>number3)
            printf("%d is the greatest of the three number",number2);
      }
    else 
      printf("%d is the greatest of the three number",number3);
}
    