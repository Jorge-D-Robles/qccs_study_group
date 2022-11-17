#include <iostream>
using namespace std;
int f(int &x, int y)
{
    if (y < 1)
        return x;
    x = x + 2;
    y++;
    cout << x << y << endl;
    return x * y;
}
int main()
{
    int x = 1;
    int y[2] = {2, 3};
    string z[3] = {"QC", "CS", "111"};
    cout << z[1] << z[2] << endl; // line a -> CS111
    cout << f(x, 0) << endl;      // line b -> 1
    f(y[1], x);                // line c -> 52, endl -> y[1] is now 5.                            

    cout << f(y[1], x) << endl;   // line d -> 72, endl, 14 -> y[1] is now 7.

    cout << y[0] + y[1] << endl;  // line e -> 9
    return 0;
}

// (a) What is the output at line (a)?
// (b) What is the output at line (b)?
// (c) What is the output at line (c)?
// (d) What is the output at line (d)?
// (e) What is the output at line (e)?