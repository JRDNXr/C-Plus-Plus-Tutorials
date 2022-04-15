#include <iostream>

using namespace std;

void spacing();
void expressions();
void division_info();

// These are global variables. Any function in THIS class can access them
int x = 5 + 5; // Addition
int y = 5 - 5; // Subtraction
int z = 5 * 5; // Multiplication
int a = 5 / 5; // Division

int main() {
    int x = 5; // A literal value
    
    // An expression is when you use operators to evaluate to a single value
    
    x = 5 + 5; // An example of an expression
    
    expressions();

    spacing();
    
    division_info();
}

void spacing() {
    cout << endl;
}

void expressions() {
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << a << endl;
}

void division_info() {
    double a = 10 / 3; // When we see this, we automatically think the
                // answer is 3.33. But, computers don't see this. This is
                // because we are dividing an int by an int, and so the
                // only logical answer would be another int, not a double.
                //
                // NOTE: Even though the data type is double, the program
                // will still output a whole number (an int).
                //
                // To fix this, we have to make one (or both) of the values
                // a floating point value. The data type must also be a
                // double (which is already done).
    
    cout << "Wrong: " << a << endl;
    
    double b = 10.0 / 3;
    
    cout << "Correct: " << b << endl;
}
