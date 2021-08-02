// CPP program to illustrate
// Implementation of BASIC ARRAY ALGORITHMS in STL C++

#include <array>
#include <iostream>
using namespace std;
  
int main()
{
    array<int, 10> myarray{ 10, 12, 47, 9, 3, 58, 0, 2, 33, 11 };

    //array::front()
    //This function is used to reference the first element of the array container
    cout << myarray.front() << endl;

    //array::back()
    //This function is used to reference the last element of the array container
    cout << myarray.back() << endl;

    //array::begin()
    //begin() function is used to return an iterator pointing to the first element of the array container
         // using begin() to print array
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    //array::end()
    //end() returns an iterator pointing to the past-the-end element in the array container
         // using end() to print array
    for (auto it = myarray.begin(); it != myarray.end(); ++it)
        cout << ' ' << *it;
    cout << endl;

    //array::fill()
    //This function is used to set a common value for all the elements of the array container
         // Using fill() function to 
    myarray.fill(5);
         // printing the array
    for(auto it=myarray.begin(); it<myarray.end(); ++it)
        cout<<*it<<" ";
    cout << endl;

    //array::swap()
    //This function is used to swap the contents of one array with another array of same type and size
    array<int, 10> myarray2{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
         // using swap() function to swap elements of arrays
    myarray.swap(myarray2);
         // printing the first array
    cout<<"myarray1 = ";
    for(auto it=myarray.begin(); it<myarray.end(); ++it)
        cout<<*it<<" ";
    cout << endl;
         // printing the second array
    cout<<endl<<"myarray2 = ";
    for(auto it=myarray2.begin(); it<myarray2.end(); ++it)
        cout<<*it<<" ";
    cout << endl;

    return 0;
}