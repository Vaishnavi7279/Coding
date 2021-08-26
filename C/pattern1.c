//hackerrank problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size=n+n/2+1;
    printf("%d\n",size);
    int array[size][size];
    for(int i=0 ; i<size ; i++)
       {
           for(int j=0 ; j<size ; j++)
              {
                  array[size/2][size/2]=1;
                  if(i+j%2==0)
                    array[i][j]=2;
                  else
                    array[i][j]=0;
              }
       }
    for(int i=0 ; i<size ; i++)
       {
           for(int j=0 ; j<size ; j++)
              {
                  printf("; %d,%d::%d",i,j,array[i][j]);
              }
           printf("\n");
       }
    return 0;
}