//template min()
#include <iostream>
using namespace std;
// One function works for all data types.  This would work
// even for user defined types if operator '<' is overloaded
template <typename T>
T MinNum(T x, T y)
{
   return (x < y)? x: y;
}
int main()
{
  cout << MinNum<int>(3, 7) << endl;  // Call MinNum for int
  cout << MinNum<double>(3.0, 7.0) << endl; // call MinNum for double
  cout << MinNum<char>('g', 'e') << endl;   // call MinNum for char 
  return 0;
}