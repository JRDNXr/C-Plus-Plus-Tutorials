#include <iostream>

using namespace std;

int calculation(int, int);
void consoleOutput();       // Lines 5 & 6 are called declarations. They
                            // declare what the functions are so that when
                            // main calls them, the program already knows
                            // what they are. These typically go into
                            // header files (6-Header-Files)
int main() {
    consoleOutput();
    
    return 0;
}

int calculation(int num1, int num2) {
    return num1 * num2;
}

void consoleOutput() {      // Lines 14 & 18 are called definitions. They
                            // "define" the function
    int userNum1, userNum2;
    
    cout << "1st Number: ";
    cin >> userNum1;
    
    cout << "2nd Number: ";
    cin >> userNum2;
    
    cout << "Total: " << calculation(userNum1, userNum2) << endl;
}
