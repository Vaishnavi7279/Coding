//EXP 4 LAB ACT Ques4 VOWEL CONSONANT COUNT//
#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    int b;
    printf("Enter the character-");
    scanf("%c", &a);
    printf("The character is-'%c' = %d\n",a,a);
    if(isalpha(a))
      {
        switch(a)
         { 
          case 'a':
             printf("Given character is a vowel\n");
             break;
          case 'e':
             printf("Given character is a vowel\n");
             break;
          case 'i':
             printf("Given character is a vowel\n");
             break;
          case 'o':
             printf("Given character is a vowel\n");
             break;
          case 'u':
             printf("Given character is a vowel\n");
             break;
          case 'A':
             printf("Given character is a vowel\n");
             break;
          case 'E':
             printf("Given character is a vowel\n");
             break;
          case 'I':
             printf("Given character is a vowel\n");
             break;
          case 'O':
             printf("Given character is a vowel\n");
             break;
          case 'U':
             printf("Given character is a vowel\n");
             break;
          default :
             printf("Given character is not a vowel");
             break;
         } 
      }
    else
      printf("CHaracter is not valid");
    return 0;
}

