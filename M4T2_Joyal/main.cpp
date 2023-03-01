// CSC 134
// M4T2 - Menus
// Joyal, Nick
// 02/27/2023
// version 2 -- character creator
// Thudd the Barbarian


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// menu functions
void option_one()
{
    // count from 0 to 9
    cout << "Test" << endl;
    int num = 0;
    while(num < 10)
    {
        cout << num << " ";
        num++;
    }
    cout << endl;
    cout << "Using for() to count" << endl;
    for(int i = 0; i < 10; i++)
    {
        cout << i << " ";

    }
    cout << endl;
}
void option_two()
{
    // sum up roll dice
    int d6_1, d6_2, d6_3; // 3 dice (6 sided)
    int total; // 3d6
    int seed;
    seed = time(0);
    srand(seed);
    d6_1 = (rand() % 6) + 1;
    d6_2 = (rand() % 6) + 1;
    d6_3 = (rand() % 6) + 1;
    total = d6_1 + d6_2 + d6_3;
    cout << "Rolling 3d6: ";
    cout << d6_1 << " + " << d6_2 << " + " << d6_3;
    cout << " = " << total << endl;
}
void option_three()
{
    // TODO what does this do
    cout << "Test 3" << endl;
}

// option four = quit

int main()
{
    // display a menu
    // have the user choose 1, 2, or 3
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to roll dice" << endl;
    cout << "Press 3 to roll a character" << endl; // not implemented yet
    cout << "Press 4 to quit" << endl;
    cout << "Choice: ";


    // TODO input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, 3, or 4
    while(choice < 1 || choice > 4)
    {
        cout << "Please choose 1, 2, 3, or 4: ";
        cin >> choice;
    }
    // if we get here, we know the choice is valid
    if(choice == 1)
    {
        option_one(); // function call
    }
    if(choice == 2)
    {
        option_two();
    }
    if(choice == 3)
    {
        option_three();
    }
    if(choice == 4)
    {
        cout << "Quitting time!" << endl;
    }



    cout << "Thanks for using the menu." << endl;

    // Print three line menu
    // press 1 to blah ect
    // cin an integer


    return 0;
}
