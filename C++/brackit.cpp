#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
    //Enter your code here. Read input from STDIN. Print output to STDOUT 
    char s[10][10];
    int size, flag[10], b[10], a;
    for(int i=0 ; i<size ; i++)
       {
           flag[i]=0;
           b[i]=0;
       }
    cin>>size;
    for(int i=0 ; i<size ; i++)
       {
           cin>>s[i];
       }
    for(int i=0 ; i<size ; i++)
       {
           if(strlen(s[i])%2!=0)
             {
                cout<<"NO"<<endl;
             }
           else if(strlen(s[i])%2==0)
             {
                 for(int j=0 ; j<(strlen(s[i])/2) ; j++)
                    {
                        a=(strlen(s[i]))-(j+1);
                        if(s[i][j]!=s[i][a])
                          {
                            cout<<strlen(s[i])<<" "<<s[i][j]<<" "<<s[i][a]<<endl;
                             b[i]=1;
                          }
                        else if(s[i][j]==s[i][a])
                          { 
                            flag[i]=1;
                          }  
                    }
             }           
       }  
    for(int i=0 ; i<size ; i++)
       {
           if(flag[i]==1)
             cout<<"Y"<<endl;
           if(b[i]==1)
             cout<<"N"<<endl;
       }  
    return 0;
}