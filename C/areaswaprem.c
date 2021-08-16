//multiple functions
#include<stdio.h>
//function to find the area of a triangle
int triangle_area(int base,int height)
{
    int area;
    area=0.5*base*height;
    return area;
}
//function to swap 2 numbers
void swap(int num1,int num2)
{
   printf("\nFUNCTION 2\nNumber before swap-\nFirst number- %d\nSecond number- %d\n",num1,num2);
   num1=num1+num2;
   num2=num1-num2;
   num1=num1-num2;
   printf("Number after swap-\nFirst number- %d\nSecond number- %d\n",num1,num2);
}
//function to find the remainer after division of 2 numbers
float remr(int num1,int num2)
{
    float rem;
    rem=num1%num2;
    return rem;
}
void main()
{
    int num1,num2,area;
    float rem;
    printf("Enter the first number-");
    scanf("%d",&num1);
    printf("Enter the second number-");
    scanf("%d",&num2);
    area=triangle_area(num1,num2);
    printf("\nFUNCTION 1\nArea of the triangle= %d\n",area);
    swap(num1,num2);
    rem=remr(num1,num2);
    printf("\nFUNCTION 3\nRemainder= %f",rem);
}