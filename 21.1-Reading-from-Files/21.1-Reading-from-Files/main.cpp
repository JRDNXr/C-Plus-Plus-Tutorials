#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void Intro();
void Type_Changes();
void More_Ways();

int main() {
    Intro();            // How to use ifstream
    //Type_Changes();     // Outtputting different values to the console
    More_Ways();        // More ways to read files
}

void Intro() {
    ifstream file("words.txt");
    
    // Stands for input file stream
    
    string input;
    vector <string> words;
    
    while(file >> input) {
        words.push_back(input);
    }
    
    // The while loop validates whether the data is going into the
    // input varible. If true, it goes through the loop. If not, it breaks
    //
    // Notice the arrows are >>
    // Look below for help:
    //
    // cout <<
    // cin >>
    //
    // Ask yourself - where is the data coming from?
    // When we ask the user for input, we type cin >> userInput. We are
    // telling the console to take the content to the right of the >> sign
    // and put it into cin.
    //
    // When we HAVE the input, we type file >> input. We are telling the
    // console to take the content of var file (remember that var file is an
    // instantiation of ifstream) and put it into input
    //
    // Now in line 21, this is acting a little different. It is merely
    // checking whether it is possible to take values from file and put it
    // into input. If true, it continues in the loop (where that same value
    // goes into a vector named words). It the file has no more values to
    // put into input, it breaks
    
    // NOTE: The delimiter is a whitespace. Even if your entire phrase is
    //       a single line, file >> input will split each word into its own
    //       vector element
    
    for(string print_words : words) {
        cout << print_words << endl;
    }
    cout << endl;
    cout << endl;
}

// OUTPUTTING DIFFERENT VALUES TO THE CONSOLE
void Type_Changes() {
    ifstream file("words.txt");
    vector <char> wordsFromFile;
    char input;
    
    while (file >> input) {
        wordsFromFile.push_back(input);
    }
    
    for (char print_wordsFromFile : wordsFromFile) {
        cout << print_wordsFromFile << "\t";
    }
    
    // Here we are using char instead of string. Notice that the delimiter
    // here is every character (since it is a char).
    //
    // Strings - Whitespace
    // char    - Every character, regardless of whitespace
    // int     - Character or whitespace
    
    cout << endl;
}

// MORE WAYS TO READ FILES
void More_Ways() {
    const int MAX = 15;
    ifstream file("words.txt");
    vector <string> wordsFromFile;
    
    char temp;
    
    for (int i = 0; i < MAX; i++) {
        temp = file.get();
        cout << temp;
        wordsFromFile[i] = temp;
    }
    
    // We need to hardcode MAX in the for loop since, at the current moment,
    // there is no way of determining the length of the file at hand
    
    // Doing it this way will make every character a brand new element
    // See below for proof:
    
    cout << wordsFromFile[4] << endl;
}
