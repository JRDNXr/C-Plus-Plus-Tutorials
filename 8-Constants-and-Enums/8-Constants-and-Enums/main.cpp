#include <iostream>

using namespace std;

enum weekday {
    Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,
};

// enum (enumeration) is a way to assign a custom word with a number. Every
// word in an enum is automatically assigned a value (in order, starting
// from 0).

enum colours {
    Red = 19, Orange, Yellow = 93, Green, Blue = 32, Purple = 20
};

// You can change this behaviour by assigning the word a number.

int main() {
    const int NUMB = 5; // const means this value cannot be changed
    
    cout << "Constant Number: " << NUMB << endl;
    
    //NUM = 2; // This will output an error. This is because you cannot
               // change a constant value
    
    //const int NUM2; // This will also output an error. This is because
                      // you are declaring a const with NO value, and since
                      // you cannot change it later, it becomes useless
                      // code
    
    weekday today;
    today = Sunday;
    
    cout << "Day: " << today + 1 << endl;
    
    colours rainbow;
    rainbow = Blue;
    
    cout << "Colour: " << rainbow << endl;
    
    rainbow = Green;
    
    cout << "Colour 2: " << rainbow << endl; // Notice the output is 94
    
    // Look at the numeric value assigned to Yellow. It's 93. Enumeration
    // counts in order, and when a value has no assigned number, it
    // automatically goes one up and assigns that new number
    //
    // For instance,
    // Yellow  -  93 (pre-assigned)
    // Green   -  93 + 1 = 94
    // Blue    -  32 (pre-assigned) ** NOT 95 **
    //
    // When a word has a pre-assigned value, enumeration does not override
    // it. It therefore will only output pre-assigned values, or create them
    // based on the order and values.

}
