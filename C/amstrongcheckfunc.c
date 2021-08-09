// checking amstrong number
#include<stdio.h>
#include<math.h>
void amstrong(int num)
{
    int count=0, digit[10], temp1, temp, i, amstrong=0, j,rem;
    printf("The number recieved is - %d\n",num);
    temp=num;
    //temp1=num;
    while(temp!=0)
      {
        temp=temp/10;
        count++;
      }
    printf("Digits in the number=%d\n",count);
    //TRANSFERRING THE DIGITS OF THE NUMBER TO THE ARRAY AND THEN CALCULATING THE AMSTRONG
    //while(temp1!=0)
      //{
        //for(i=1 ; i<=count ; i++)
           //{
             //digit[i]=temp1%10;
             //temp1=temp1/10;
             //printf("Digits=%d ; ",digit[i]);
             //amstrong=amstrong+(pow(digit[i],count));
             //amstrong=amstrong+(digit[i]*digit[i]*digit[i]);
           //}
      //}
    //CHECKING WITH NORMAL METHODS
    while(temp>0)
      {
         rem=temp%10;
         amstrong=amstrong+pow(rem,count);
         temp=temp/10;
      }
    printf("Amstrong=%d\n",amstrong);
    if(num==amstrong)
      printf("\n%d is an amstrong number",num);
    else
      printf("\n%d is not an amstrong number",num);
}
int main()
{
    int num;
    printf("Enter the number-");
    scanf("%d", &num);
    amstrong(num);
    return 0;
}