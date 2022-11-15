#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

    srand(time(0));
    double a[10] = {9.5, 8.5, 10, 5, 2, 7, 6, 3, 2.2, 0}, sum = 0, mx = 0, avg;
    a[rand() % 10] + 10; // replace last number in a with a random 2-digit number

    // compute sum and avg
    for (
        int c = 0; c <
                   10;
        c++)
    {

        sum +=
            a[c];
    }
    avg =
        sum / 10;

    for (int c = 0; c < 10; c++)
    {
        if (a[c] < avg && a[c] >
                              mx)
        { // largest value below avg
            mx = a[c];
        }
    }
    cout << mx << " is the largest value in the program below the average." << endl;

    return 0;
}