#include <iostream>

using namespace std;

namespace jrdn {
    int calculation(int num1, int num2) {
        return num1 * num2;
    }

    void consoleOutput() {
        int userNum1, userNum2;
        
        cout << "1st Number: ";
        cin >> userNum1;
        
        cout << "2nd Number: ";
        cin >> userNum2;
        
        cout << "Total: " << calculation(userNum1, userNum2) << endl;
    }
}
