#include <iostream>
using namespace std;

int product(int n);

int main() 
{
  cout << product(2022) << endl << product(102030) << endl;
}

int product(int n)
{
    if (n < 10) return n;

    if (n % 10 == 0)
        return product(n/10);
    else return n % 10 * product(n/10);
}