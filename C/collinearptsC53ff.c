//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question6
#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,y1,y2,y3,d1,d2,d3,s,area;
    printf("Enter x1: ");
    scanf("%f",&x1);
    printf("Enter x2: ");
    scanf("%f",&x2);
    printf("Enter x3: ");
    scanf("%f",&x3);
    printf("Enter y1: ");
    scanf("%f",&y1);
    printf("Enter y2: ");
    scanf("%f",&y2);
    printf("Enter y3: ");
    scanf("%f",&y3);
    printf("Therefore the points are %f,%f  %f,%f  %f,%f\n",x1,y1,x2,y2,x3,y3);
    d1=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    d2=sqrt(((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2)));
    d3=sqrt(((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1)));
    s=(d1+d2+d3)/2;
    area=sqrt(s*(s-d1)*(s-d2)*(s-d3));
    if(area==0)
      printf("Area of the triangle formed by the three points= %f => The given points are collinear",area);
    else
      printf("Area of the triangle formed by the given points= %f => The given points are non-collinear",area);
    return 0;
}