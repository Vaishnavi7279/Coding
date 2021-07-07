//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question5
#include<stdio.h>
int main()
{
    float length,breadth,perimeter,area;
    printf("Enter length: ");
    scanf("%f",&length);
    printf("Enter breadth: ");
    scanf("%f",&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if(area>perimeter)
      printf("Area of the rectangle %f is greater than the perimeter of the rectangle %f",area,perimeter);
    else
      printf("Area of the rectangle %f is lesser than the perimeter of the rectangle %f",area,perimeter);
    return 0;
}