//Pattern upper diamond//
#include<stdio.h>
void main()
{
    int n;
    printf("Enter n-");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++)
       { 
           for(int j=i ; j<n ; j++)
              {
                  printf(" ");
              }
           for(int k=1 ; k<2*i ; k++)
              {
                  printf("*");
              }
           printf("\n");
       }
}