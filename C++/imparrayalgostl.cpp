// C++ code to demonstrate working of IMPORTANT ARRAY ALGORITHMS

#include<iostream>
#include<algorithm> 
#include<numeric>

using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1, 2, 3, 4, 5, -6};
  
//all_of()
//It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false
    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements\n" :
          cout << "All are not positive elements\n";

//any_of()
//This function checks for a given range if there’s even one element satisfying a given property mentioned in function. Returns true if at least one element satisfies the property else returns false
    // Checking if any element is negative
    any_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "There exists a negative element\n" :
          cout << "All are positive elements\n";

//none_of()
//This function returns true if none of elements satisfies the given condition else returns false
    // Checking if no element is negative
    none_of(ar, ar+6, [](int x){ return x<0; })?
          cout << "No negative elements\n" :
          cout << "There are negative elements\n"; 

//copy_n() 
//copies one array elements to new array. This type of copy creates a deep copy of array
    // Declaring second array
    int ar1[6]; 
    // Using copy_n() to copy contents
    copy_n(ar, 6, ar1);  
    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";

//iota()
//This function is used to assign continuous values to array    
    // Initializing array with 0 values
    int ar2[6] =  {0};
    // Using iota() to assign values
    iota(ar2, ar2+6, 20);
    // Displaying the new array
    cout << "\nThe new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << ar2[i] << " ";

    return 0;
  
}