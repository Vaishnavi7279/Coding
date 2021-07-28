#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char string[50];
    int size;
    cout<<"Enter the desired string size- ";
    cin>>size;
    cout<<"Enter the string- ";
    for(int i=0 ; i<size ; i++)
       {
           cin>>string[i];
       }
    for(int i=0 ; i<size ; i++)
       {
           if(isalpha(string[i]))
             {
                 if(string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U' || string[i]=='Y' || string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='y')
                   {
                     int* ptr=i;
                     delete[] ptr;
                   }
                 else
                  cout<<"."<<string[i];
             }
       }
    return 0;
}