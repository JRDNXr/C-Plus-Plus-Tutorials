#include <iostream>

using namespace std;

int main() {
    
    int num;
    string noun, verb, adj;
    const string space = " ";
    const string period = ".";
    
    cout << "Enter a number >= 2: ";
    cin >> num;
    cout << "Enter a plural noun: ";
    cin >> noun;
    cout << "Enter a verb: ";
    cin >> verb;
    cout << "Enter a adjective: ";
    cin >> adj;
    
    cout << "Jessica had " << num << space << noun << period << endl;
    cout << "Jessica " << verb << " to the mall to get more." << endl;
    cout << "Jessica " << adj << " while walking back home." << endl;
}
