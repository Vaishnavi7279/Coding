//lab experiment 7 lab activity ques 1-sum of array elements using recursion//
#include<stdio.h>
sum(int array[100])
{
    printf("func working;");
    int sum_=0;
    for(int i=0 ; i<size ; i++)
       {   
           printf("loop working");
           sum_=array[i]+sum(array[i-1]);
       }
    return sum_;
}
int main()
{
    int array[100],sum_=0;
    printf("Enter the desired size of array(<100): ");
    scanf("%d",&size);
    printf("Insert elements in the array-");
    for(int i=0 ; i<size ; i++)
      {
          scanf("%d",&array[i]);
      }
    sum_=sum(array[100]);
    printf("The sum of the elements of the array= %d",sum);
    return 0;
}