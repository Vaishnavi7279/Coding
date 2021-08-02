// C++ program to demonstrate working of MANIPULATING ALGORITHMS in STL C++
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    // Initializing vector with array values
    int arr[] = {5, 10, 15, 20, 20, 23, 42, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is :";
    for (int i=0; i<6; i++)
        cout << vect[i]<<" ";
 
    //arr.erase(position to be deleted)
    //This erases selected element in vector and shifts and resizes the vector elements accordingly.

    // Delete second element of vector
    vect.erase(vect.begin()+1);
 
    cout << "\nVector after erasing the element: ";
    for (int i=0; i<5; i++)
        cout << vect[i] << " ";
 
    //arr.erase(unique(arr.begin(),arr.end()),arr.end()) 
    //This erases the duplicate occurrences in sorted vector in a single line

    // sorting to enable use of unique()
    sort(vect.begin(), vect.end());
 
    cout << "\nVector before removing duplicate occurrences: ";
    for (int i=0; i<5; i++)
        cout << vect[i] << " ";
 
    // Deletes the duplicate occurrences
    vect.erase(unique(vect.begin(),vect.end()),vect.end());
 
    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " ";

    //next_permutation(first_iterator, last_iterator) 
    //This modified the vector to its next permutation

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";

    //prev_permutation(first_iterator, last_iterator) 
    //This modified the vector to its previous permutation

    // modifies vector to its next permutation order
    next_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing next permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";
 
    prev_permutation(vect.begin(), vect.end());
    cout << "\nVector after performing prev permutation:\n";
    for (int i=0; i<n; i++)
        cout << vect[i] << " ";

    //distance(first_iterator,desired_position) 
    //It returns the distance of desired position from the first iterator

    // Return distance of first to maximum element
    cout << "Distance between first to max element: ";
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
 
    return 0;
}