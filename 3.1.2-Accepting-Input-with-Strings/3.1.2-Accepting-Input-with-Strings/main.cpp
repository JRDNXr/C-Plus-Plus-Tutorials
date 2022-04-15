#include <iostream>
#include <string>

using namespace std;

int main() {
    string userInput;
    
    cout << "Enter Multi-Word String: ";
    getline(cin, userInput); // This will capture the whole line, meaning
                             // all characters will be contained in the
                             // string
    
    cout << userInput << endl;
}
