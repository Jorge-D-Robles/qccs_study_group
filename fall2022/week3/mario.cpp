#include <iostream>
using namespace std;
int main()
{
    int n;
    do
    {
        cout << ("Positive Number: ");
        cin >> n;
    }
    //This gets the input, under 1 over 8 is rejected
    while (n < 1 || n > 8);

//for loop to generate # blocks
    //for each row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
                printf (" ");
            else
                printf("#");

        }
        printf("\n");
    }
}