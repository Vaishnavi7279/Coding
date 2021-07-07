//LAB EXPERIMENT 7 QUES 3//
#include<stdio.h>
#include<string.h>
int main()
{
    char string[50];
    printf("Enter a string in lower case: ");
    scanf("%s",&string);
    printf("String after execution: ");
    for(int i=0 ; string[i]!='\0' ; i++)
    {
        printf("%c",toupper(string[i]));
    }
    return 0;
}