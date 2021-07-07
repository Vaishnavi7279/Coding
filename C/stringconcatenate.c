//PPL LAB EXAM QUESTION:2 19th January//
#include<stdio.h>
#include<string.h>
int main()
{
    //declaring strings
    char string1[100],string2[100];
    //input the first string
    printf("Enter the first string: ");
    scanf("%s",&string1);
    //input the second string
    printf("Enter the second string: ");
    scanf("%s",&string2);
    //determining length of the strings
    printf("Length of first string is %d\n",strlen(string1));
    printf("Length of second string is %d\n",strlen(string2));
    if(strlen(string1)+strlen(string2)>200)
      //checking the total string size after concatenation
      printf("String sixe exceeded ERROR Strings can't be concatenated");
    else 
      //concatenating srtings
      printf("String after concatenation is %s",strcat(string1,string2));
    return 0;
}