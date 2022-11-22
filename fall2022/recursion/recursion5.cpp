// Write a recursive function with title:

#include <iostream>
using namespace std;
string baseChange(int n, int base);
int main()
{
    cout << baseChange(5, 156) << endl;
}
string baseChange(int n, int base)
{
    
}

// which converts the decimal number n to the given base.
// For example,
//  baseChange(5,156)
// would return 1111, because 156 is 125 + 25 + 5 + 1 which is
// written as 1111 in base 5.