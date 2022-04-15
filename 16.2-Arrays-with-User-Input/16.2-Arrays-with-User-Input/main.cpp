#include <iostream>
#include <limits>

using namespace std;

void printArray(int[], int);
void anExtraString();

int main() {
    
    int myArr[10], countData = 0;
    int size = sizeof(myArr) / sizeof(int);
    
    for (int i = 0; i < size; i++) {
        cout << "Enter #: ";
        
        if (cin >> myArr[i]) {
            // This evaluates whether cin was able to collect an input from
            // myArr. If it successfully does, it returns true (continues
            // down the if branch). If it is unsuccessful, it returns
            // false (going down the else branch, and breaking the loop).
            //
            // *This only works with int*
            countData++;
        }
        else {
            break;
        }
    }
    printArray(myArr, countData);
    anExtraString();
    
    // This function just asks the user to enter 1 more string
    // After entering all your numbers, type some random set of characters.
    // Ie. dssadadsadada
    //
    // You'll notice it skips the first request. That's because the system
    // accepts the first character, but doesn't rid the rest.
    // To elimite this problem, we use the operators below:
    
    cin.clear(); // Captures all excess data
    //cin.ignore(1000, '\n'); // This works too, but only up to 1000 characters
    cin.ignore(numeric_limits < :: streamsize > :: max(), '\n');
    
    // This does the same thing, except it does not have a capped limit
    
    cout << endl;
    anExtraString();
}

void printArray(int newArray[], int size_newArray) {
    for (int i = 0; i < size_newArray; i++) {
        cout << newArray[i] << "\t";
    }
    cout << endl;
}

void anExtraString() {
    string oneMore;
    
    cout << "Enter 1 more string: ";
    cin >> oneMore;
    cout << "String: " << oneMore << endl;
}
