#include <iostream>
using namespace std;

int main()
{
    int n;
    do
    {
        cout << ("Positive Number: ");
        cin >> n;
        
    } while (n < 1 || n > 8);

    for (int height = 0; height < n; height++)
    {
        for (int width = 0; width < n; width++)
        {
            if (height + width < n - 1)
            printf(" ");
            else printf("#");
        }
        printf("  ");
        for (int width = 0; width < n; width++)
        {
            if (height + width > n - 2)
            printf("#");
        }
        printf("\n");
    }
}