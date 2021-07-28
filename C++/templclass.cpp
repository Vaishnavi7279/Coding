//class template
#include <iostream>
using namespace std;
//template defining
template <typename T>
//class definition
class Array 
{
private:
    T *ptr;
    int size;
public:
    Array(T arr[], int s);
    void print();
};
//calling the array function of the array class
//creating an array and assigning values
template <typename T>
Array<T>::Array(T arr[], int s) 
{
    //dynamically creating elements depending on size 's'
    ptr = new T[s];
    size = s;
    //assigning values from the parameterized array
    //assigning the pointer to those values
    for(int i = 0; i < size; i++)
        ptr[i] = arr[i];
}
//calling the array function of the array class
//creating an array and assigning values
template <typename T>
void Array<T>::print() 
{
    for (int i = 0; i < size; i++)
        cout<<" "<<*(ptr + i);
    cout<<endl;
}
//main function 
int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    //object declaration
    Array<int> a(arr, 5);
    //function calling
    a.print();
    return 0;
}