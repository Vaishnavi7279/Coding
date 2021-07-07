#include<iostream>
using namespace std;
class count
{
    private:
      int value;
    public:
    //constructor to initialize count to 5
    count() : value(5) {}
    //overload ++ operator when used as prefix
    void operator ++()
    {
        ++value;
    }
    //overload ++ operator when used as postfix
    void operator ++(int)
    {
        ++value;
    }
    void display()
    {
        cout<<"count:"<<value<<endl;
    }
};
int main()
{
    count c1;
    //call the "void operator ++(int)" function
    c1++;
    c1.display();
    //call the "void operator ++()" function
    ++c1;
    c1.display();
    return 0;
}