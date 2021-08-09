//HackerRank problem
//find sum of the array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,sum=0;
    scanf("%d",&size);
    int *array=(int *) malloc(size * sizeof(int));
    for(int i=0 ; i<size ; i++)
       {
           scanf("%d",&array[i]);
       }
    for(int i=0 ; i<size ; i++)
       {
           sum=sum+array[i];
       }
    printf("%d",sum);
}