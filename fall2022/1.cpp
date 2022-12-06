 

#include <iostream>

using namespace std;

 

int fun(int x){

   if (x < 10) return 1;

   return fun(x/10) * 100 + x % 10;

}


int main() {

   int x = 2, y = 22, a[3] = {3,2,1};

   string b[3] = {"hello",",", "hi"};


   cout << a[x];                                                               // output 

   cout << b[a[x]] << endl;                                           // output 

 for (int i = 2; i > 0; i--) cout << b[i]; cout << endl; //output: 

 cout << fun(x);                                                            // output 
 
 cout << fun(y);                                                            // output 
 

   

   return 0;

}