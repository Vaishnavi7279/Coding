//Amstrong creation till num
#include<stdio.h>
#include<math.h>
//function for amstrong creation
void armstrong(int num)
{
    int temp, temp1, rem, cube;
    for(int i=1 ; i<=num ; i++)
       {
           int count=0, amstrong=0;
           temp=i;
           //checking the digits in the number
           while(temp!=0)
             {
                 temp=temp/10;
                 count++;
             }
           temp1=i;
           //creating the amstrong for the number
           while(temp1>0)
             {
                 rem=temp1%10;
                 if(rem==5)
                   cube=5*5*5;  //since the compiler is calculating pow(5,3)=124
                 else 
                   cube=pow(rem,count);
                 amstrong=amstrong+cube;
                 temp1=temp1/10;
             }
            //printing the number if it satisfies the amstrong condition
           if(amstrong==i)
             printf("%d, ", i);
           else 
             continue;
       }
}
int main()
{
    //taking the limit as input
    int num;
    printf("Enter the number till which Armstrong numbers have to be created: ");
    scanf("%d", &num);
    printf("Amstrong numbers till %d are: \n", num);
    armstrong(num);  //calling the function
}