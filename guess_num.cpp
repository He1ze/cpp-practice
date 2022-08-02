```cpp
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

    /*
    Create a bool variable to check if the player has won the game

    > set a variable to a random number
    > create a guess variable
    > take the user input and update the guess variable
    > compare that guess variable to the variable that generated a random number
    
    while the bvariable is not true, loop through the entire game,

    > if it is < then the number, print too low
    > if it is > then the number, print too high, keep going until the
    num has been guessed

    */

    int attempts = 0;
    int userAttempt;
    srand(static_cast<unsigned int> (time(0))); // seed random num gen
    int _randInt = rand();
    int randInt = (_randInt % 100) + 1;
    bool WON = false;
    cout << "Welcome to the number guessing game.. \n";
    while(!WON){

        cout << "Take a guess: \n";
        cin >> userAttempt;
        ++attempts;

        if(userAttempt == randInt){
            cout << "You correctly guessed the number in " << attempts << "!";
            WON = true;
        }
        else if(userAttempt > randInt){
            cout << "Your number is too high! \n";
        }
        else{
            cout << "Your number is too low! \n";
        }
    }


    return 0;
}

```
