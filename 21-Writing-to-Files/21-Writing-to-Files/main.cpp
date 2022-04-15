#include <iostream>
#include <vector>
#include <fstream> // Known as File Stream

using namespace std;

void IO_Streams();
void Vector_Example();
void User_Input();
void Miscallaneous();
void Manual_Filename();

int main() {
    IO_Streams();           // Introduction
    Vector_Example();       // Writing preset names to a text file
    User_Input();           // Writing user input to a text file
    Manual_Filename();      // Manually enter a filename for the console
    Miscallaneous();        // Other useful information
}

// INTRODUCTION
void IO_Streams() {
    ofstream file; // Instantiate aan object from the clsas "ofstream"
    
    file.open("test.txt"); // Opens the file on the system directory
    
    file << "Write anything here"; // Writes data to the file
    
    file.close(); // Closes the file to avoid memory leaks
}

// WRITING PRESET NAMES TO A TEXT FILE
void Vector_Example() {
    ofstream file2("test2.txt");
    
    vector <string> names;
    
    names.push_back("JRDN");
    names.push_back("Thiya");
    names.push_back("Zach");
    
    // We can print all sorts of things to a text file. Vectors are only
    // scratching the surface (see function "User_Input" below)
    
    for (string print_vnames : names) {
        file2 << print_vnames << endl;
    }
    
    /*
    for (int i = 0; i < names.size(); i++) {
        cout << names[i] << "\t";
    }*/
    
    // This is the alternative to the above For Each loop
    
    file2.close();
}

// WRITING USER INPUT TO A TEXT FILE
void User_Input() {
    string userInput;
    ofstream file("test3.txt");
    
    vector <string> names;
    
    cout << "Write another name: ";
    cin >> userInput;
    
    // Here we are requesting the user to enter data to be saved inside
    // the text file
    
    names.push_back("JRDN"); // Adds 1 value, because why not?
    names.push_back(userInput);
    
    for (string print_vnames : names) {
        file << print_vnames << endl;
    }
    
    file.close();
    
    cout << endl;
}

// MANUAL ENTER A FILENAME FOR THE CONSOLE
void Manual_Filename() {
    string filename;

    cout << "Enter a filename: ";
    cin >> filename; // Type test5.txt

    ofstream file2(filename, ios::app);
    
    // Instead of a hard coded filename, we put the users input here
    // NOTE: We also add ios::app since we don't want to replace any text
    // that may already be contained

    file2 << "Congrats!"; // This appends text to the file

    file2.close();
}

// OTHER USEFUL INFORMATION
void Miscallaneous() {
    ofstream file("test4.txt", ios::app);
    
    // ios::app means input/output stream :: append
    // This will add data to the text file rather than completely replace
    // it each time
    
    for (int i = 0; i <= 5; i++) {
        file << "Test number: " << i << endl;
    }

    if (file.is_open()) {
        cout << file.is_open() << endl;
        cout << "YES" << endl;
        
        // Is_Open method checks to see if the file opened successfully
        // Line 95 will output "1" to indicate true
    }
    else {
        cout << "NO" << endl;
    }
    
    file.close();
    
    // ANOTHER TIDBIT:
    // If the file does not exist, the program will create the file.
    // This only works in OFSTREAM
}
