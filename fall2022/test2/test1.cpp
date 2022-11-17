// Problem 1 (10 points) Write the best title lines for the functions that are called by the following program. Do not
// supply the blocks for the functions.

int main()
{
    int x = 79, y = 99;
    string names[3] = {"Amy", "Cathy", "Debbie"};
    cout << numNines(y) << endl; // prints 2;
    deleteY(names[0]);
    cout << names[0] << endl;            // prints Am
    listPrimes(x, y);                    // prints 79 83 89 97
    cout << thirdChar(names[2]) << endl; // prints b
    mystery(mystery(thirdChar(names[1]), y), 17);
    return 0;
}

// (a) What is the title line for numNines?
// (b) What is the title line for deleteY?
// (c) What is the title line for listPrimes?
// (d) What is the title line for thirdChar?
// (e) What is the title line for mystery?
int numNines(int y);
void deleteY(string &s);
void listPrimes(int x, int y);
char thirdChar(string s);
int mystery(char x, int y);