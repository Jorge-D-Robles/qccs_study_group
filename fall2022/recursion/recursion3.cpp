// (3) Write a recursive function secondDigit that could be called
// as follows:

#include <iostream>
using namespace std;
int secondDigit(int n);
int main() {
 cout << secondDigit(7295) << endl;
 return 0;
}
int secondDigit(int n)
{
    if (n < 10)
        return -1;
    if (n < 100)
        return n % 10;
    else return secondDigit(n/10);
}

// This program should output 2.