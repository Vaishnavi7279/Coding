//Lab Experiment 6 Ques 1a - checking amstrong//
#include<stdio.h>
#include<math.h>
void amstrong(int num)
{
    int count=0, digit[10], temp1, temp, i, amstrong=0, j;
    printf("The number recieved is - %d\n",num);
    temp=num;
    temp1=num;
    while(temp!=0)
      {
        temp=temp/10;
        count++;
      }
    printf("Digits in the number=%d\n",count);
    while(temp1!=0)
      {
        for(i=0 ; i<count ; i++)
           {
             digit[i]=temp1%10;
             temp1=temp1/10;
             printf("Digits=%d ; ",digit[i]);
             amstrong=amstrong+(pow(digit[i],count));
           }
      }
    if(num==amstrong)
      printf("\n%d is an amstrong number",num);
    else
      printf("\n%d is not an amstrong number",num);
}
void main()
{
    int num;
    printf("Enter the number-");
    scanf("%d", &num);
    amstrong(num);
}