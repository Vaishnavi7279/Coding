//HackerRank problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int main() {
    int ans, n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int size=n;
    int array[size];
    array[0]=a;
    array[1]=b;
    array[2]=c;
    for(int i=3 ; i<size ; i++)
       {
           array[i]=array[i-1]+array[i-2]+array[i-3];
       }
    ans=array[size-1];
    printf("%d", ans); 
    return 0;
}