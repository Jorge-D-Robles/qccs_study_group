// (1) Write a recursive function rectangle(int n) that prints a rectangle with
// n rows and 10 columns. For example it could be applied as follows:
// int main() {
//  cout << rectangle(5) << endl;
//  return 0;
// }
// This program should output:
// **********
// **********
// **********
// **********
// **********
#include <iostream>
using namespace std;
string rectangle(int n);
int main () {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << rectangle(n) << endl;
  return 0;
}

string rectangle(int n)
{
    if (n == 1) return "**********\n";
    return rectangle(n - 1) + rectangle(1);
}