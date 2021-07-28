#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    char s[50],s1[50];
    int size, count0=0;
    cout<<"Enter the desired number of characters you want to enter in the string-";
    cin>>size;
    cout<<"Enter the string- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    for(int i=0 ; i<size ; i++)
       {
           if(s[i]==s[0])
             count0++;
       }
    if(count0%2!=0)
      {
          s1[0]=s[0];
      }
    return 0;
}