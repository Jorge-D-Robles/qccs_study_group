#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i = 0;
    int n;
    cout << "How much do you love it?: ";
    cin >> n;

    while (i < n)
    {
        cout << "I'm lovin' it! " << i + 1 << endl;
        i++;
    }
    return 0;
}