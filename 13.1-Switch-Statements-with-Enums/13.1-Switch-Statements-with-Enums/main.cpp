#include <iostream>

using namespace std;

int main() {
    enum class Colour { // We can use enums for switch statements
        Red, Yellow, Blue, Green,
    };
    
    // We also created a Class name "Colour" so we can define everything
    // in the enum using that Class name
    
    Colour col = Colour::Green;
    // Here we create a variable for "Colour" so our program can access it.
    // We use the variable "col" so this program can utilize it

    // This means we define "col" as "Number 4" (even though it is not an
    // int)
    
    switch(col) {
        case Colour::Red:
            cout << "You choose Red." << endl;
            break;
        
        case Colour::Yellow:
            cout << "You choose Red." << endl;
            break;
            
        case Colour::Blue:
            cout << "You choose Blue." << endl;
            break;
            
        case Colour::Green:
            cout << "You choose Green." << endl;
            break;
    }
}
