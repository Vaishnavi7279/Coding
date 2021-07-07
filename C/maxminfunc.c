//lab experiment 6 Practice question 1//
#include<stdio.h>
void max_min(int num1,int num2)
{
    int max,min;
    if(num1>num2)
      {
          max=num1;
          min=num2;
      }
    else if(num2>num1)
      {
          max=num2;
          min=num1;
      }
    else
      printf("Maximum and minimun can not be determined");
    printf("Maximum number=%d\n",max);
    printf("Minimun number=%d\n",min);
}
int main()
{
    int num1,num2;
    printf("Enter the first number-");
    scanf("%d",&num1);
    printf("Enter the second number-");
    scanf("%d",&num2);
    max_min(num1,num2);
    return 0;
}