#include <iostream>
using namespace std;

string printBinary(int n);
int main() {
 cout << printBinary(23) << endl;
 return 0;
}
string printBinary(int n)
{
    if (n == 0)
        return "0";
    if (n == 1)
        return "1";
    return printBinary(n/2) + printBinary(n % 2);
    
}

// Write a recursive function print binary, that prints
// a positive integer n in binary. For example, the following
// program would output 10111: