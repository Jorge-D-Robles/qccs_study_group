// Fill in recursive function decreaseFirstDigit(int n) which returns the parameter n with only the first digit decrease by 1 and the rest digits remain the same.  If the first digit is 1, then it becomes 0 .

// Ex:
#include <iostream>
using namespace std;
int decreaseFirstDigit(int n)
{

    if (n < 10) return n-1;

    int r_sol = decreaseFirstDigit(n/10);

    return r_sol * 10 + n % 10;
}
int main()
{
int n = 1234;

    n = decreaseFirstDigit(n); // no change, n is 234
    cout << n << endl;

n = 2;
n = decreaseFirstDigit(n); // n becomes 1
cout << n << endl;

n = 5432;

    n = decreaseFirstDigit(n); // n becomes 4432,
    cout << n << endl;
}
