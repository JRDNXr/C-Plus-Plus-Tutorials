#include <iostream>
#include <climits>

using namespace std;

int main() {
    char x = 'A'; // Also known as a char literal
                  // Stores 8-bits (1 byte)
    
    cout << "Size of Char: " << sizeof(char) << endl;
    cout << "Char Minimum: " << CHAR_MIN << endl;
    cout << "Char Maximum: " << CHAR_MAX << endl;
    cout << "Unsigned Char Maximum: " << UCHAR_MAX << endl;
    
    cout << x << endl;
    
    // char is a part of the Integer Data Types, simply because it can
    // store numbers and single characters.
    // The reason for this is shown below:
    
    char y = 67;
    
    cout << y << endl;
    
    // Notice, this DOES NOT print 67. Instead, it prints "C". This is
    // because of ASCII. Each character, letter, and number (anything you
    // can type on your keyboarad) has an assigned numeric number that the
    // computer understands.
    //
    // In this case, the letter C is assigned to number 67. When the
    // computer sees character 67, it understands "C". When we declare a
    // char to a number, the system converts it to a character
    
    cout << (int) y << endl;
    
    // Type-casting the char will make it output the number rather than the
    // character. Type-casting is shown later on, but provided here to
    // demonstrate how the number can be shown
}
