#include <iostream>
#include <cctype>
using namespace std;
int main()
{

// Complete the following function that counts how many parameter characters c are in the parameter string st. Ex: count("dad",'d') --> 2

int count(string st, char c)
{
    int count = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if (st[i] == c)
        {
            count++;
        }
    }
    return count;
}
}