// Problem 3 (10 points) Write a complete C++ program that does the following:
// 1. Fills an integer array of size 20 with random numbers between 1 and 9 (inclusive).
// 2. Prints the elements of the array separated by a space.
// 3. Prints the count and average of the odd numbers in the array.
// A sample run of the program follows.
// 9 1 4 2 6 2 6 1 5 8 9 6 9 2 2 4 9 6 6 1
// Count of odd numbers is 7
// Average of odd numbers is 6.14286

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    int count = 0;
    double sum = 0;
    double avg = 0;
    int array[20];
    for(int i = 0; i < 20; i++)
    {
        array[i] = rand() % 9 + 1;
        cout << array[i] << " ";
        if (array[i] % 2 == 1)
        {
            count++;
            sum += array[i];
        } 
    }
    cout << endl;
    avg = sum/count;
    
    cout << "Count of odd numbers is " << count << endl;
    cout << "Average of odd numbers is " << avg << endl;
    
}
















    // int a[20];
    // int count = 0;
    // double sum = 0;
    // double avg = 0;
    // for (int i = 0; i < 20; i++)
    // {
    //     a[i] = rand() % 9 + 1;
    //     cout << a[i] << " ";
    //     if (a[i] % 2 != 0)
    //     {
    //         count++;
    //         sum += a[i];
    //     }
    // }
    // cout << endl;
    // cout << "Count of odd numbers is " << count << endl;
    // avg = sum / count;
    // cout << "Average of odd numbers is " << avg << endl;
    // return 0;