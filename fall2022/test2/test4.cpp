// Problem 4 (10 points) Write a function called doubleThird that takes a positive integer parameter and duplicates
// the third digit (from the left) of the number. If the integer has fewer than three digits, the function returns the input
// number unchanged.
// An example of a program that uses this function follows:
#include <iostream>
using namespace std;

int doubleThird(int n);
int main()
{
    cout << doubleThird(87923) << endl; // prints 879923
    cout << doubleThird(562) << endl;   // prints 5622
    cout << doubleThird(17) << endl;    // prints 17
    cout << doubleThird(4289) << endl;  // prints 42889
    return 0;
}

int doubleThird(int x)
{
    if(x < 100) return x;
    if(x < 1000) return(x * 10) + (x % 10);
    return doubleThird(x/10) * 10 + x % 10;
}

