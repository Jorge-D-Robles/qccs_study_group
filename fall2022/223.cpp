#include <iostream>
using namespace std;
int removeFirst(int x)
{
    if (x < 10)
        return 0;
    return 10 * removeFirst(x / 10) + x % 10;
}
int middle(int x)
{
    if (x < 100)
        return x;
    return middle(removeFirst(x) / 10);
}
int main()
{
    cout << middle(19683) << endl; // prints 6
    cout << middle(1968) << endl;  // prints 96
    return 0;
}

// number 10
//  The recursive function removeFirst removes the first digit of a positive integer. It is applied in
//  another recursive function middle that returns the middle digit (or middle two digits) of a positive integer none
//  of whose digits are 0. For example the middle of 12345 is 3 but the middle of 1234 is 23.
//  Implementations of these functions with parts of the code covered up are given below. There is also a main program
//  that uses them.