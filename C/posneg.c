//LAB EXPERIMENT 4 - QUES 6 - POSITIVE NEGATIVE ZERO//
#include<stdio.h>
int main()
{
    int num;
    printf("Enter num-");
    scanf("%d",&num);
    if(num>0)
      printf("%d is positive",num);
    else if(num==0)
      printf("%d is zero",num);
    else if(num<0)
      printf("%d is negative",num);
    return 0;
}