//LAB EXP 5 Ques - 9 - PRIME//
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number till which you want prime numbers: ");
    scanf("%d",&n); 
    printf("Prime numbers are:-\n");    
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
       if(c==2)
        {
            printf("%d ; ",i);
        }
    }
}
