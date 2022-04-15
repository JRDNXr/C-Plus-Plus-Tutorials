#include <iostream>

using namespace std;

void spacing();
void forLoop();
void whileLoop();
void doWhileLoop();
void continueStatement();

// Remember that we have to declare our functions BEFORE the main. Normally
// we just place the whole body of the function before the main, but we can
// also do it this way

int main() {
    forLoop();
    
    spacing();
    
    whileLoop();
    
    spacing();
    
    doWhileLoop();
    
    spacing();
    
    continueStatement();
    
    spacing();
}

void spacing() {
    cout << endl;
}

void forLoop() {
    for (int counter = 0; counter < 5; counter++) {
        cout << counter << " ";
    }
}

void whileLoop() {
    int counter = 5;
    
    cout << "Enter a number: ";
    cin >> counter;
    
    while (true) {
        cout << "Enter another number: ";
        cin >> counter;
        
        if (counter == 5) {
            break;
        }
    }
}

void doWhileLoop() {
    int counter = 7;
    
    do {
        cout << "Enter a number that you like: ";
        cin >> counter;
    } while (counter != 7);
}

void continueStatement() {
    string str = "This is a test";
    
    // T H I S  [SPACE]  I S  [SPACE]  A  [SPACE]  T  E  S  T
    // 1 2 3 4     5     6 7     8     9     10    11 12 13 14
    
    //cout << str.size(); // Both of these functions do the same thing
    //cout << str.length(); // They both capture the length of the string
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a') { // Space has to be single quotes, not double
            continue;
            
            // This tells the program that even if a condition is met,
            // continue with the rest of the iteration
        }
        
        cout << str[i];
    }
}
