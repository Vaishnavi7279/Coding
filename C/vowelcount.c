#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char string[50];
    int n,vowel=0,cons=0;
    printf("Enter string-");
    fgets(string, sizeof(string), stdin);
    n=strlen(string);
    printf("String length- %d", (n-1));
    for(int i=0;i<n;i++)
       {
           if(isalpha(string[i]))
             { 
                if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
                   vowel++;
                else
                   cons++;
             }
       }
    printf("\nVowels in the string- %d", vowel);
    printf("\nConsonants in the string- %d", cons);
}
