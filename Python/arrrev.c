//HackerRank problem
//Reversing the arrayy
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
           array[i]=array[i]+array[(size-1)-i];
           array[(size-1)-i]=array[i]-array[(size-1)-i];
           array[i]=array[i]-array[(size-1)-i];
       }
    for(int i=0 ; i<size ; i++)
       {
           scanf("%d ",&array[i]);
       }
}