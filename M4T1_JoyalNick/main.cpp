// CSC 134
// M4T1 - Loops
// Joyal, N
// 02/22/2023

#include <iostream>

using namespace std;
// Define some functions we use in main
void say_hello(int count)
{
  // repeat count times
  int i = 0; // index
  while(i < count)
    {
  cout << "Hello #" << i << endl;
      i++;
    }
  return; // for void functions, return is optional (implied)
}

int square(int num)
{
  // input: num, and int
  // output: num squared
  return num*num;
}


int main() 
{
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times);




// part 2 -- table of squares
// The world's first "real program" running on a stored-program
// computer (David Wheeler, Cambridge, May 6, 1949)

int i = 0;
int max;
cout << "How many numbers in the table of squares? ";
cin >> max;
cout << "Table of squares from 0 to " << max << endl;
cout << "____________________" << endl;
while (i <= max)
  {
    cout << i << "\t\t" << square(i) << endl;
    i++;
  }
}