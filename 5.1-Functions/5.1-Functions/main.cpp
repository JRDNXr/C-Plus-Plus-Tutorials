#include <iostream>

using namespace std;

void Multiply_Numbers() {
    int userInput_1, userInput_2;
    
    cout << "1st Number: ";
    cin >> userInput_1;
    
    cout << "2nd Number: ";
    cin >> userInput_2;
    
    cout << "Total: " << userInput_1 * userInput_2 << endl;
}

int main() {
    Multiply_Numbers(); // Here we are calling the function whose
                        // identifier is "Multiply_Numbers". Notice that
                        // there is no code in the main function. All of
                        // our code is contained inside the function.
                        // Because of this, we don't need to pass any
                        // arguments into the function (since it does all
                        // the work for us). Also note that we do not need
                        // any parameters inside the function at line 5
                        // This is the 3rd way to use a function.
    
    return 0;
}
