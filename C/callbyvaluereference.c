//PPL LAB EXAM QUESTION:4 19th January//
#include<stdio.h>
int add_(int x, int y)
{
    printf("CALL BY VALUE FUNCTION WORKING\n");
    int sum_;
    sum_=x+y;
    return sum_;
};
int add(int *x, int *y)
{
    printf("CALL BY REFERENCE FUNCTION WORKING\n");
    int sum;
    sum=*x+*y;
    return sum;
};
int main()
{
    //declaring variables
    int x,y,sum_v=0,sum_c=0;
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter y: ");
    scanf("%d",&y);
    sum_v=add_(x,y);
    printf("Sum= %d\n",sum_v);
    sum_c=add(&x,&y);
    printf("Sum= %d",sum_c);
    return 0;
}
