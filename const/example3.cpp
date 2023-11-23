

// C++ program to demonstrate
// the above concept
#include <iostream>
using namespace std;
 
// Driver code
int main()
{
    int x{ 9 };
    
    const int* const i = &x;
   // *i=10;
    // The above statement will give CTE
    // Once Ptr(*i) value is
    // assigned, later it can't
    // be modified(Error)
 
    char y{ 'A' };
 
    const char* const j = &y;
 
    // *j='B';
    // The above statement will give CTE
    // Once Ptr(*j) value is
    // assigned, later it can't
    // be modified(Error)
    
    x = 24;

    cout << *i << " and " << *j;
 
    return 0;
}