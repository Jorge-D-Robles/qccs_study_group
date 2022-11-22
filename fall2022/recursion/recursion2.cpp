#include <iostream>
using namespace std;
int triangle(int n);
int main() 
{
    cout << triangle(15) << endl;
    return 0;
}
int triangle(int n)
{
    if (n == 0)
        return 0;
    if (n > 0)
        return n + triangle(n-1);
}


// Write a function with title:
// int triangle(int n)
// that calculates the triangular number whose specification is:
// triangle(n) = n + triangle(n - 1) if n is positive
// and triangle(0) = 0.