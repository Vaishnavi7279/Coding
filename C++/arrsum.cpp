#include<iostream>
using namespace std;
int main()
{
    int s[50], total=0, size;
    cout<<"Enter the size- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<size ; i++)
       cin>>s[i];
    for(int i=0 ; i<size ; i++)
           total=s[i]+total;
    cout<<"Array Sum= "<<total;
    return 0;
}