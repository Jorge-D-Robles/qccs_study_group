#include <iostream>

using namespace std;

int main()
{

    double a[10] = {9.5, 8.5, 10, 5, 2, 7, 6, 3, 2.2, 0}, sum = 0, input;

    cout << "please enter a number: ";
    
    cin >> a[9];

    for (
        int i = 0; i < 10; i++)
    {

        sum += a[i];
    }

    double avg = sum / 10;
 
    sum = 0;

    int count = 0;

    for (int i = 0; i < 10; i++)
    {

        if (a[i] > avg)
        {

            sum += a[i];

            count++;
        }
    }

    cout << "Average of the values above average: " << sum / count << endl;

    return 0;
}