#include<stdio.h>
int main()
{
    int arr[100],n,sum=0;
    float avg;
    printf("Enter the number of values you want to enter-");
    scanf("%d",&n);
    printf("Enter values for %d numbers-\n",n);
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
       sum=sum+arr[i]; 
    //since n is int and avg is float, result will always follow this pattern
    avg=sum/n;
    printf("Average= %f",avg);
    return 0;
}