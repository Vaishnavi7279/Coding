//Let Us C pg.53 CHAPTER 3: DECISION CONTROL STATEMENTS 1 QUESTIONS
//Question3
#include<stdio.h>
int main()
{
    float angle1,angle2,angle3;
    printf("Enter the values of the three angles: ");
    scanf("%f %f %f",&angle1,&angle2,&angle3);
    if(angle1+angle2+angle3==180)
      printf("A valid triangle can be formed by the given angles");
    else
      printf("A valid triangle cannot be formed by the given angles");
    return 0;
}