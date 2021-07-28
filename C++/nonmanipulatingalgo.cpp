//NON MANIPULATING ALGORITHMS

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation
using namespace std; 
int main()
{
    // Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42 , 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is: ";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    // SORT() Sorting the Vector in Ascending order
    // sort(first_iterator, last_iterator) – To sort the given vector
    sort(vect.begin(), vect.end());
 
    // Printing the vector after sorting
    cout << "\nVector after sorting is: ";
    for (int i=0; i<n; i++)
       cout << vect[i] << " ";
 
    // REVERSE() Reversing the Vector
    // reverse(first_iterator, last_iterator) – To reverse a vector.
    reverse(vect.begin(), vect.end());
 
    cout << "\nVector after reversing is: ";
    for (int i=0; i<6; i++)
        cout << vect[i] << " ";
 
    // MAXIMUM ELEMENT
    // *max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
    cout << "\nMaximum element of vector is: ";
    cout << *max_element(vect.begin(), vect.end());
 
    // MINIMUM ELEMENT
    // *min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
    cout << "\nMinimum element of vector is: ";
    cout << *min_element(vect.begin(), vect.end());
 
    // ACCUMULATE
    // accumulate(first_iterator, last_iterator, initial value of sum)
    // Starting the summation from 0
    cout << "\nThe summation of vector elements is: ";
    cout << accumulate(vect.begin(), vect.end(), 0);
    cout << endl;

    // COUNT
    // Counts the occurrences of 20 from 1st to
    // last element
    cout << "Occurrences of 20 in vector : ";
    cout << count(vect.begin(), vect.end(), 20);
    count << endl;

    // FIND()
    // find() returns iterator to last address if
    // element not present
    find(vect.begin(), vect.end(),5) != vect.end()?
                     cout << "\nElement found"<<endl:
                     cout << "\nElement not found"<<endl;
 
    // UPPER BOUND() LOWER BOUND()
    // Sort the array to make sure that lower_bound()
    // and upper_bound() work.
    sort(vect.begin(), vect.end());
 
    // Returns the first occurrence of 20
    auto q = lower_bound(vect.begin(), vect.end(), 20);
 
    // Returns the last occurrence of 20
    auto p = upper_bound(vect.begin(), vect.end(), 20);
 
    cout << "The lower bound is at position: ";
    cout << q-vect.begin() << endl;
    cout << endl;
 
    cout << "The upper bound is at position: ";
    cout << p-vect.begin() << endl;
    cout << endl;
 
    return 0;
}

