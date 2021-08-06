//checking if an array is sorted and sorting it if it is not
#include<stdio.h>
int main()
{
    int size,array[100],flag=0,temp;
    printf("Enter size- ");
    scanf("%d",&size);
    printf("Enter the array- ");
    for(int i=0 ; i<size ; i++)
       {
           scanf("%d",&array[i]);
       }
    for(int i=0 ; i<size-1 ; i++)
       {
           if(array[i]>array[i+1])
             {
                 flag=1;
                 break;
             }
       }
    if(flag==0)
      printf("The array is sorted");
    else 
      {
         printf("The array is not sorted\n");
         for(int i=0 ; i<size-1 ; i++)
            {
                if(array[i]>array[i+1])
                  {
                     temp=array[i]+array[i+1];
                     array[i]=temp-array[i];
                     array[i+1]=temp-array[i];
                  }
            }
         printf("Array after sorting: ");
         for(int i=0 ; i<size ; i++)
            printf("%d ",array[i]);
      }
}