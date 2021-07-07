#include<stdio.h>
/*Function with no argument but RETURN TYPE*/
int average()
{
    int m1,m2,m3,m4,s,avg;
    s=sum(m1,m2,m3,m4);
    avg=s/4;
    printf("AVERAGE FUNCTION CALLED\n");
    return avg;
};
/*Function with ARGUMENT and RETURN TYPE*/
int sum(int m1, int m2, int m3, int m4)
{
    int s;
    s=m1+m2+m3+m4;
    printf("Sum= %d",s);
    return s;
    average();
};
/*Function with ARGUMENT but no return type*/
void grade(int avg)
{
    char g;
    printf("Average= %d",avg);
    if(avg>=90)
      {
         g='A';
         printf("Grade= %c",g);
      }
    else if(avg>=80 && avg<90)
      {
         g='B';
         printf("Grade= %c",g);
      }
    else if(avg>=70 && avg<80)
      {
         g='C';
         printf("Grade= %c",g);
      }
    else if(avg<70)
      {
         g='D';
         printf("Grade= %c",g);
      } 
};
/*Function with no argument and no return type*/
void main()
{
    int m1,m2,m3,m4;
    printf("Enter marks of four subjects-\n");
    scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
    sum(m1,m2,m3,m4);
}