#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;

    do 
    {
        cout << "Please input a int between 0 and 10: ";
        cin >> n;
    }
    while (n < 0 || n > 10);
    cout << "You typed in " << n << endl;
    return 0;
}

//get a user to input a number less than 10, but greater than or equal to 0.
//if the input is less than 0 or greater than 10, we are going to prompt again.
//and again.
//and again.
