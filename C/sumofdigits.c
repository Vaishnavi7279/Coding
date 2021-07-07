#include<stdio.h>
int main()
{
    int num, count=0, digit[10], temp1, temp, i=0, sum=0;
    printf("Enter the number-");
    scanf("%d", &num);
    temp=num;
    temp1=num;
    while(temp!=0)
      {
        temp=temp/10;
        count++;
      }
    printf("Digits in the number=%d\n",count);
    while(i<count)
      { 
        while(temp1!=0)
           {
             digit[i]=temp1%10;
             temp1=temp1/10;
             printf("Digits=%d ; ",digit[i]);
             sum=sum+digit[i];
           }
        i++;
      }
    printf("Sum=%d",sum);
    return 0;
}