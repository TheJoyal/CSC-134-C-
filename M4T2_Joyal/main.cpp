// CSC 134
// M4T2 - Menus
// Joyal, Nick
// 02/27/2023


#include <iostream>

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
    // sum up five numbers
    cout << "Test 2" << endl;
}
void option_three()
{
    // TODO what does this do
    cout << "Test 3" << endl;
}

int main()
{
    // display a menu
    // have the user choose 1, 2, or 3
    // do something based on the choice

    cout << "Welcome to the menu" << endl;
    cout << "Press 1 to count" << endl;
    cout << "Press 2 to sum up numbers" << endl;
    cout << "Press 3 to TODO" << endl; // not implemented yet
    cout << "Choice: ";


    // TODO input validation
    int choice;
    cin >> choice;
    // user must pick 1, 2, or 3
    while(choice < 1 || choice > 3)
    {
        cout << "Please choose 1, 2, or 3: ";
        cin >> choice;
    }
    // if we get here, we know the choice is valid
    if(choice == 1)
    {
        option_one(); // function call
    }



    cout << "Thanks for using the menu." << endl;

    // Print three line menu
    // press 1 to blah ect
    // cin an integer


    return 0;
}
