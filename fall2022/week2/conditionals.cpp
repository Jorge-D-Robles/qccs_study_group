#include <iostream>
#include <string>

using namespace std;
int main()
{
    int num1;
    string op;
    int num2;

//get user input for one number 
    cout << "Input 1: ";
    cin >> num1;
//use an operator (+ - * / % )    
  do 
    {
        cout << "Choose your operation (+, -, *, /, %): ";
        cin >> op;
    }
    while (op != "+" && op != "-" && op != "*" && op != "/" && op != "%");    
    
//get a second number
    cout << "Input 2: ";
    cin >> num2;
//you process the two numbers 
//you get an answer 

if (op == "+")
{
    cout << "Answer = " << (num1 + num2) << endl;
}
else if (op == "-")
{
    cout << "Answer = " << (num1 - num2) << endl;
}
else if (op == "*")
{
    cout << "Answer = " << (num1 * num2) << endl;
}
else if (op == "/")
{
    cout << "Answer = " << (num1 / num2) << endl;
}
else if (op == "%")
{
    cout << "Answer = " << (num1 % num2) << endl;
}
else cout << "Please input a correct operator.\n";

return 0;
// if (something == something)
// {
//     do something related to that
// }
// else if (something == something)
// {
//     do something else
// }
// else something else 
}




