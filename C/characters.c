//Characters- HackerRank Problem
//Input a char, a string, a sentence and print it accordingly
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{ 
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",&s);
    //scanf("%[^\n]%*c", sen);
    gets(sen);
    printf("\n%c\n%s\n%s",ch,s,sen);
    return 0;
}