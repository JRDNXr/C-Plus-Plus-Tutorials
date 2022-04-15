#include <iostream>

using namespace std;

int main() {
    const int ans = 7; // Answer will always stay the same, so we use const
    int guess;
    
    cout << "Guess the Number: ";
    cin >> guess;
    
    int points = guess == ans ? 10 : 0;
    
    // Points is equal to this:
    //      Is guess (guess) is equal to (==) answer (ans) ? (?)
    //      If yes, points is equal to 10
    //      If no, points is equal to 0
    
    cout << points << endl;
    cout << endl;
    
    string points2;
    cout << "Guess the Number: ";
    cin >> guess;
    
    
    guess == ans ? cout << "CORRECT!\n" : cout << "WRONG\n";
    
    // Here we are using statements
    // We don't need to output anything since the outputs are built into
    // the whole statement itself
}
