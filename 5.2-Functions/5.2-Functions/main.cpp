#include <iostream>

// Here we have the same program as 5.1. Only there's 1 small difference.
// We now have 2 functions (excluding main)

using namespace std;

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

int main() {
    consoleOutput();
    
    return 0;
}

/*

Lets walkthrough it:
main function starts at line 24. There's not much here. Just a call to the
consoleOutput function with no arguments. Going to line 12, we continue.
 
We are declaring 2 ints with no values. Going on, we see there is text being
sent to the console, asking the user for numbers in order. We see one last
request being sent to the console. However, inside this request, there is a
call to another function called "calculation". This time, however, it is
passing arguments into the function. Lets head to line 8.
 
In line 8, we see the function has two parameters set up to accept the
incoming values (num1 and num2). There's only 1 simple line in this
function - take num1 anad multiply it with num2. Return this answer. We are
going back now to line 21 (inside the consoleOutput function).
 
Here, our initial call to the function is replaced with the answer (the
product of the 2 numbers) and the program ends.
 
Notice how this program is exactly the same as 5.1. The only difference is
that we are categorizing (organizing) our code into more functions.

*/
