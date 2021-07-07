//LAB EXP 5 Ques - 8 - divisible by 3 and 5 till num//
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n-");
    scanf("%d",&n);
    printf("Numbers till %d divisible by 3 & 5 are-",n);
    for(int i=0 ; i<n ; i++)
       {
           if(i%3==0 && i%5==0)
             printf("%d ; ",i);
       }
    return 0;
}
    