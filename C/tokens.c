#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    //Write your logic to print the tokens of the sentence here
    char string[1000];
    gets(string);
    for(int i=0 ; i<strlen(string) ; i++)
       {
           if(string[i]==" ")
             {
                 string[i]="\n";
             }
       }
    printf("%s",string);
    return 0;
}