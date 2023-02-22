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


int main() 
{
  // call a function
  int times = 0;
  cout << "How many times should I say Hello? ";
  cin >> times;
  say_hello(times);
}