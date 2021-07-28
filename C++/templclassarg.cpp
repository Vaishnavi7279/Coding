#include<iostream>
using namespace std;
//template definition 
template<class T, class U = char>
//class definition
class A  
{
public:
    T x;
    U y;
    A() 
    {   
        cout<<"Constructor Called"<<endl;   
    }
};
int main()  
{
   //Can we specify default value for template arguments?
   //the type of the class is constant
   // This will call A<char, char>
   A<char> a;    
   //Can there be more than one arguments to templates?
   A<char, char> b;
   A<int, double> c;
   A<int, char> d;
   return 0;
}


