// CSC 134
// M5T1
// Joyal, Nick
// 03/13/2023
// Purpose: To use a few void and value returning functions

/* We can either define our functions before we need them,
   or declare them all at the top.
   The second option is cleaner
   So we put all the "Function signatures" up top, above main
*/


#include <iostream>

using namespace std;


void say_hello();                  // prints Hello
int double_a_number(int num);             // returns number times 2
int add(int num1, int num2);       // returns sum of 2 ints


int main()
{
  say_hello();
  int num = double_a_number(2);
  return 0;
}

// Define functions. Like a dictionary, the definition is the long version
void say_hello()
{
    cout << "Hello!" << endl;
    int my_num = 3;
    cout << my_num << " doubled is: " << double_a_number(my_num) << endl;
    cout << "Give me two ints: ";
    int first, second;
    cin >> first >> second;
    //int first = 2;
    //int second = 3;
    int sum = add(first,second);
    cout << first << " + " << second << " = ";
    cout << add(first,second) << endl;
    return;
}

int double_a_number(int num)
{
    /*
     input: any integer
     output: the int times two
    */
    //return num*2; // we can just return directly
    int answer = num * 2;
    return answer;
}

int add(int num1, int num2)
{
    // input: 2 integers
    // output: their sum

    int sum = num1 + num2;
    return sum;

}
