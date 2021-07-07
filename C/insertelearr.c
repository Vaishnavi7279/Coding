//LAB EXPERIMENT 7 Ques 2//
#include<stdio.h>
int main()
{
    int a1[100],n,i,j,element;
    printf("Enter the desired size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array: ");
    for(int a=0 ; a<n ; a++)
       scanf("%d",&a1[a]);
    printf("Enter the desried position to add the element: ");
    scanf("%d",&i);
    printf("Enter the element to be added: ");
    scanf("%d",&element);
    a1[i]=element;
    printf("The array is-\n");
    for(int a=0 ; a<n ; a++)
       printf("%d\n",a1[a]);
    return 0;
}