#include<iostream>
using namespace std;
int main()
{
    int s[50], total=0, size;
    cin>>size;
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    for(int i=0 ; i<size ; i++)
        {
            if(s[i]>s[i+1])
              {
                  temp=s[i];
                  t=i;
                  flag=1;
                  break;
              }
        }
    for(int i=0 ; i<t ; i++)
       {
           sum=s[i]+
       }
    cout<<"Array Sum= "<<total;
    return 0;
}