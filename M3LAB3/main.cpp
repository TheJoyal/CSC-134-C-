// CSC 134
// M3LAB3
// Joyal, Nick
//02/12/2023

#include <iostream>
# include <cstdlib>
#include <ctime>

using namespace std;


int main() 
{
  // for testing, we'll use a repeatable seed
  int die1, die2, roll; // roll is 2d6
  int seed;            // will use time(0) later
  bool win = false;
  char any_key;
  
  cout << "Welcome to the crpas table" << endl;

  cout << "What's your lucky number? ";
  cin >> seed;

  srand(seed);

  cout << "Let's roll! " << endl; // TODO 'press any key'
  die1 = (rand() % 6) + 1;
  die2 = (rand() % 6) + 1;
  roll = die1 + die2;

  // DEBUG: just use lucky number as roll

  cout << "You rolled : (" << die1 << " + " << die2 << ") ->";
  cout << roll << endl;

  // determine outcome!
  switch (roll)
    {
      // instant losses
      case 2:
      cout << "Snake eyes!" << endl;
      win = false;
      break;
      case 12:
      cout << "Boxcarss!" << endl;
      break;
      
      //instant wins
      case 7:
      cout << "You win!" << endl;
      win = true;
      break;
      
      // to be continued (point rolls)
      default:
      cout << "Unknown - TODO" << endl;
    }


  // end game
  cout << "Thank you for playing!" << endl;
  
  
  return 0;
}