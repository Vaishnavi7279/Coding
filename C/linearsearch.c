#include<stdio.h>
int main()
{
    int size,array[100],element,flag,i;
    printf("Enter the desired size(<50): ");
    scanf("%d",&size);
    printf("Enter %d elements in the array: ",size);
    for(i=0 ; i<size ; i++)
       {
           scanf("%d",&array[i]);
       }
    printf("Enter the element to be found: ");
    scanf("%d",&element);
    while(array[i]!=element)
         {
             if(array[i]==element)
               printf("Element found");
             i++;
         }
    //for(int i=0 ; i<size ; i++)
       //{
           //if(array[i]==element)
             //{
                 //printf("\nElement found");
                 //flag=1;
                 //break;
             //}
            //else
            //{
                 //printf("\nElement can not be found");
                 //flag=0;
            //}   
        //if(flag==1)
          //printf("Element found\n");
        //else
        //{
            //printf("Element cant be found\n");
        //}
       //}
    return 0;
}