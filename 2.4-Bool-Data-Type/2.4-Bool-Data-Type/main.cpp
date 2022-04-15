#include <iostream>

using namespace std;

int main() {
    bool x = 0; // bools are only true and false statements
                // they can have 4 different values:
                //      - true (1)
                //      - false (0)
                //      - 0 (false)
                //      - 1 (true)
                //
                // True is the same as the numeric value 1 (on)
                // False is the same sa the numeric value 0 (off)
    
    cout << x << endl;
    
    bool y = 6543;
    
    cout << y << endl; // This will print 1 since any negative or positive
                       // number (with the exception of 0) will
                       // automatically convert to 1
    
    cout << std::boolalpha << x << endl; // boolaplha is a part of the std
                                         // namespace
    cout << boolalpha << y << endl; // boolalpha will convert the numeric
                                    // value to its english counterpart
                                    // This is also called a Manipulator
}
