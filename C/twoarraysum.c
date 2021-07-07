//PPL LAB EXAM QUESTION:4 19th January//
#include<stdio.h>
int main()
{
    //declaring variables
    int array1[100],array2[100],sum[100],size;
    //determing the size of both the arrays
    printf("Enter the desired array size: ");
    scanf("%d",&size);
    //input the first array
    printf("Enter the first array: ");
    for(int i=0 ; i<size ; i++)
       scanf("%d",&array1[i]);
    //input the second array
    printf("Enter the second array: ");
    for(int i=0 ; i<size ; i++)
       scanf("%d",&array2[i]);
    //finding the sum of the two arrays
    for(int i=0 ; i<size ; i++)
       sum[i]=array1[i]+array2[i];
    //displaying the sum of both the arrays
    printf("The sum of both the arrays is: ");
    for(int i=0 ; i<size ; i++)
       printf("%d ; ",sum[i]);
    return 0;
}