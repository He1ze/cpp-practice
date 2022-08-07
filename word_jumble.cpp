```
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

// Word Jumble
// The classic word jumble game where the payer can ask for a hint

int main(){

    enum fields {WORD, HINT, NUM_FIELDS};
    // Final Enumerator is a convenient way to store the number of elements
    // NUM_FIELDS returns 2
    // so there are two elements before it


    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {

    {"wall", "Do you feel you're banging your head against something?"},
    {"monkey", "ooh-ooh ah-ah"},
    {"glasses", "this item helps you see"},
    {"apple", "a delicious red fruit!"},
    {"brilliant", "Word to describe your brother."},
    };
    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    /*
    Indexes the choice then indexes the 0th index

    */
    string theHint = WORDS[choice][HINT];

    string jumble = theWord;
    int length = jumble.size();
    for (int i = 0; i < length; ++i){
        char firstIndex = rand() % length;
        char secondIndex = rand() % length;
        char temp = jumble[firstIndex];
        jumble[firstIndex] = jumble[secondIndex];
        jumble[secondIndex] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter ’hint’ for a hint.\n";
    cout << "Enter ’quit’ to quit the game.\n\n";
    cout << "The jumble is: " << jumble;
    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while((guess != theWord) && (guess != "quit")){
        if (guess == "hint"){
            cout << theHint;
        }
        else
        {
            cout << "Sorry that is not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess;
    }
    if(guess == theWord){
        cout << "\nYou've correctly guessed the word, congratulations!" << '\n';
    }
    cout << "Thanks for playing!";




    return 0;
}
```
