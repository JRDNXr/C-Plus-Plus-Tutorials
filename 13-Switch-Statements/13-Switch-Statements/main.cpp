#include <iostream>

using namespace std;

// A run through of how structured code can look like. See below for the
// switch statements

void spacing();
void listOptions();
void userChoice();
void choosingFunc(int);
void addition(int, int);
void multiplication(int, int);

int main() {
    listOptions();
    userChoice();
}

void spacing() {
    cout << endl;
}

void listOptions() {
    cout << "Choose an option: " << endl;
    cout << "(1) Addition" << endl;
    cout << "(2) Multiplication" << endl;
    spacing();
    cout << "Choice: ";
}

void userChoice() {
    int choice = 0;
    
    cin >> choice;
    choosingFunc(choice);
}

void choosingFunc(int userChoice) {
    int num1, num2;
    
    cout << "Number 1: ";
    cin >> num1;

    cout << "Number 2: ";
    cin >> num2;
    
    switch(userChoice) { // Switch acts based on an integer
        case 1: // Colons here, not semi-colons
            addition(num1, num2);
            break;
            
        case 2:
            multiplication(num1, num2);
            break;
            
        case 79: // The integers can be anything
            cout << "JRDN's favourite number!" << endl;
    }
}

void addition(int num1, int num2) {
    int newNum = 0;

    newNum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << newNum << endl;
}

void multiplication(int num1, int num2) {
    int newNum = 0;
    
    newNum = num1 * num2;
    cout << num1 << " x " << num2 << " = " << newNum << endl;
}
