//Welcome- HackerRank Problem
//Input a sentence and print it and Hello World in two different lines
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
	
    char s[100];
    //scanf("%[^\n]%*c", &s);
    gets(s);
    printf("Hello, World!\n%s",s);
    return 0;
}