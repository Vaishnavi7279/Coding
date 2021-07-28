#include<iostream>
using namespace std;
int main()
{
    int array[50], min=0, max=0, size;
    cout<<"Enter the size- ";
    cin>>size;
    cout<<"Enter the array- ";
    for(int i=0 ; i<(size-1) ; i++)
       cin>>array[i];
    int i, j, least, temp;
    for(i=0 ; i<(size-2) ; i++) 
       {
          least=i;
          for(j=i+1 ; j<(size-1) ; j++)
          if(array[j]<array[least])
            least=j;
          temp=array[i];
          array[i]=array[least];
          array[least]=temp;
       }
    cout<<"The sorted array is= ";
    for(int i=0 ; i<(size-1) ; i++)
       cout<<array[i]<<" ";
    for(int i=0 ; i<(size-1) ; i++)
       {
           if(array[i]!=(i+1))
             {
                 cout<<endl<<"The missing number is- "<<(i+1)<<endl;
                 break;
             }
       }
    return 0;
}
