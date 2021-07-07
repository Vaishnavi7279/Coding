//EXP 4 LAB ACT Q8 CHARACTER DISTINCTION COUNT//
#include<stdio.h>
#include<string.h>
int main()
{
    char a;
    printf("Enter the character-");
    scanf("%c", &a);
    printf("The character is-'%c' = %d",a,a);
    if((a>=65 && a<=90) || (a>=97 && a<=122))
      {
        printf("\nThe given character is an alphabet\n");
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
    else if(a>=48 && a<=57)
      {
        printf("\nThe given character is a number");
      }    
    else if(a>=32 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=126)
      {
        printf("\nThe given character is a sspecial character");
      } 
    return 0;
}        



//if('a'>='A' && 'a'<='z')
            //{
              // printf("\nThe given character is an alphabet");
               //switch(a)
                 //{
                   // case 1:
                    //if(a==65 || a==69 || a==73 || a==79 || a==85 || a==97 || a==101 || a==105 || a==111 || a==117)
                      //printf("\nThe given character is a vowel");
                    //break;
                    //case 2:
                    //if(a!=65 || a!=69 || a!=73 || a!=79 || a!=85 || a!=97 || a!=101 || a!=105 || a!=111 || a!=117)
                      // printf("\nThe given character is a vowel");
                    //break;
                 //}
            //}
        //case 2:
          //if(a>=48 && a<=57)
            //{
               //printf("\nThe given character is a number");
               //break;
            //}    
      //}