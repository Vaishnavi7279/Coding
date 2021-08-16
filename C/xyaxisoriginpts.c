//Checking the points 
//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question8
#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter x: ");
    scanf("%f",&x);
    printf("Enter y: ");
    scanf("%f",&y);
    if(x==0 && y==0)
      printf("The given point coincides with the origin");
    else if(x==0)
      printf("The point lies on Y axis");
    else if(y==0)
      printf("The point lies on X axis");
    else
      printf("The point lies on the plane");
    return 0;
}