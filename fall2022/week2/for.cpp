#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;
    cout << "How much are you lovin' it?: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "I'm lovin' it " << i + 1 << " times!\n";
    }
    return 0;
}
 // int i = 0;
    // int n;
    // cout << "How much do you love it?: ";
    // cin >> n;

    // while (i < n)
    // {
    //     cout << "I'm lovin' it! " << i + 1 << endl;
    //     i++;
    // }