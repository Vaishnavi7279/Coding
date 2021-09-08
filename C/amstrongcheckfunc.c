// checking amstrong number
#include<stdio.h>
#include<math.h>
void amstrong(int num)
{
    int count=0, temp, amstrong=0, rem, cube;
    printf("The number recieved is= %d\n",num);
    temp=num;
    //counting the digits in the number
    while(temp!=0)
      {
        temp=temp/10;
        count++;
      }
    printf("Digits in the number= %d\n",count);
    temp=num;
    //calculating the amstrong of the number
    while(temp>0)
      {
         rem=temp%10;
         if(rem==5)
           cube=5*5*5; //since the compiler is calculating pow(5,3)=124
         else 
           cube=pow(rem,count);
         amstrong=amstrong+cube;
         temp=temp/10;
      }
    printf("Amstrong=%d",amstrong);
    //checking if the number is an armstrong or not
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