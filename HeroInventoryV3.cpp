#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Hero's inventory but with vectors

int main(){
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    // :: is the scope resolution operator

    vector<string>:: iterator myIterator;
    // iterators kinda like something that describes a particular element, they aren't something
    //      you can "feel", but like something you can "see", like
    //      a post it note that identifies something
    //      Since they are not constant, these iterators can be used to change values
    vector<string>:: const_iterator iter;
    //      const_iterators have the same concept as iterators however, you can only
    //      read through them

    cout << "Your items: \n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        // .end() function for iterator objects don't actually represent
        //      the last element, it is however the element after the last element
        cout << *iter << endl;
        // (*) known as the dereferencing operator, it outputs an object the represents
        // the iterator without being the iterator itself
    }

    cout << "\n You trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battle axe";
    cout << "\n Your items: \n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\n The item name '" << *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n";
    // Whenever the deference operator is coupled to the dot operator
    // surround the deference operator object with parenthesis.
    cout << "\n The item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n";

    cout << "\n You recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");
    cout << "\n Your items: \n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\nYour armor is destroyed in a fierce battle.";
    inventory.erase((inventory.begin() + 2));
    cout << "\n Your items: \n";
    for (iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl;
    }
    return 0;
}



