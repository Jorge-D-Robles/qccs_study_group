// Problem 20 The recursive function swapFirst is used to swap the first digits of two positive integers that
// have the same number of digits. For example swapping the first digits in 123 and 987 gives the numbers 923 and
// 187.
// The parameters of the function represent two positive integers that have the same number of digits. An implementation of swapFirst with parts of its code covered up is given below. There is also a main program that calls the
// function.
// Some pieces of code have been replaced by PART (a), PART (b), and so on. To answer the 5 parts of this question
// you should supply the C++ code that was replaced. Each answer must fit on a single line.
#include <iostream>
using namespace std;
void swapFirst(int &a, int &b) {
if (a < 10) {
int temp = b;
b = a;
a = temp;
}
else {
int aStart = a / 10, bStart = b / 10;
swapFirst(aStart, bStart);  
a = 10 * aStart + a % 10;
b = 10 * bStart + b % 10;
}
}
int main() {
int x = 243, y = 357;
swapFirst(x, y);
cout << x << " " << y << endl; // prints 343 257
return 0;
}
// (a) Give a replacement for PART (a) to declare parameters a and b
// Answer: int x, int y
// (b) Give a replacement for PART (b) to test for the base case of recursion:
// Answer: a < 10
// (c) Give a replacement for PART (c) as a useful recursive call:
// Answer:
// (d) Give a replacement for PART (d) with a useful expression:
// Answer:
// (e) Give a replacement for PART (e) with a useful expression:
// Answer: