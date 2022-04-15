#include <iostream>
#include <string> // Gives access to the string class

using namespace std;

void spacing() {
    cout << endl;
}

int main() {
    string greeting = "hello"; // Also known as a string literal
                               // We created an object (instance) of this
                               // class (greeting)
    
    cout << greeting << endl; // Outputs string
    spacing();
    
    // h  e  l  l  o
    // 0  1  2  3  4
    
    cout << greeting[4] << endl; // Gets the 4th element in the string (in
    spacing();                   // this case, it is the letter "o"
    
    
    /*
        CONCATENATION
    */
    
    
    string greeting2 = " there";
    
    string greeting3 = greeting + "there"; // hellothere
    cout << greeting3 << endl;
    
    string greeting4 = greeting + greeting2; // hello there
    cout << greeting4 << endl;
    
    // This is different from concatenation. This is called Appending. We
    // are appending the exclamation mark to the end of the string
    greeting4 += "!!!"; // hello there!!!
    //greeting4.append("!!!"); // An alternative way to append
    cout << greeting4 << endl;
    spacing();
    
    
    // Strings classes have member functions. These functions allow us
    // to manipulate strings and utilize them more. We use the "." operator
    // to call them
    
    
    /*
        DIFFERENT STRING METHODS / MODIFIERS
    */
    
    
    greeting = "Hello, World!";

    // H E L L O ,  [SPACE]  W O R  L  D  !
    // 1 2 3 4 5 6     7     8 9 10 11 12 13
    
    // Notice that length start counting from 1 (like humans)
    cout << "Length: " << greeting.length() << endl; // length counts ALL the characters
                                       // in a string
    
    // greeting.size() is an alternative to length
    // length is a method.
    //
    // Method
    // A method is essentially a function attached to an object.
    // Ie. legnth is a function from the string class. greeting is the
    //     object. The "." inbetween represets the function attaching to
    //     the object. Therefore, this becomes a method.
    
    string myStr = "Hi";
    
    myStr.append(" there!"); // An alternative to the modulous way of
                             // appending
    cout << "Append: " << myStr << endl; // Hi there!
    
    // H I  [SPACE]  T H E R E !
    // 0 1     2     3 4 5 6 7 8
    
    myStr.insert(2, ", uh,"); // Go to element 2 and add the following chars
    cout << "Inset: " << myStr << endl; //Hi, uh, there!
    
    // H I ,  [SPACE]  U H ,  [SPACE]  T H E  R  E  !
    // 0 1 2     3     4 5 6     7     8 9 10 11 12 13
    
    myStr.erase(2, 11); // Go to element 2 and delete 12 characters after it
    cout << "Erase: " << myStr << endl; // Hi!
    
    myStr = "Hi there, my name is Bob. Pleasure!";
    
    myStr.erase(2); // With no 2nd argument, this will delete all characters
                    // from (and including) element 2 and onwards
    cout << "Erase Everything: " << myStr << endl; // Hi
    
    myStr = "Hello";
    
    myStr.erase(myStr.length() - 2);
    cout << "Erase Last Characters: " << myStr << endl; // Hel
    
    // We are attempting to erase the last characters in a string using the
    // string function "erase"
    //
    // We do so my capturing the length of the string
    //
    //           H E L L O
    // Element:  0 1 2 3 4
    // Length:   1 2 3 4 5
    //
    // *Remember - element and length count differently. We are focusing
    // on length right now.
    // We see the length of the string is 5. We are reducing 2 from 5
    // 5 - 2 = 3. Therefore, the output is "Hel"
    
    myStr = "Heaven";
    
    // H E A V E N
    // 0 1 2 3 4 5
    
    myStr.pop_back(); // An alternative to deleting the last characters,
                      // except in a very basic form
    cout << "Pop Back: " << myStr << endl;
    
    myStr.replace(2, 4, "ll");
    cout << "Replace: " << myStr << endl;
    spacing();
    
    // Go to element 2 and replace the next 4 characters (inclusive) with
    // these ones. In this case, "aven" is being replaced by "ll"
    
    string phrase = "What the hell is that";
    string phrase2 = "Stupid to think how stupid it is";
    
    phrase.replace(phrase.find("hell"), 4, "****");
    cout << phrase << endl;
    
    // find looks for the string in another string. If a match is found, it
    // then replaces the amount of characters (4) with the following
    // characters (in this case, astericks)
    //
    // *Remember, find counts the word like length does (like humans do)
    
    phrase2.replace(phrase2.find("stupid"), 6, "******");
    cout << phrase2 << endl;
    
    // Notice, this only changed one of the swear words in the phrase. This
    // is because "Stupid" has a capital "S". When we use find, it is
    // case-sensitive, and therefore ignores these characters

    phrase = "What the hell is that";
    
    phrase = phrase.substr(5, 3);
    cout << "Sub String: " << phrase << endl;
    
    // Finds the element to start at, then (inclusive) selects the
    // characters. With these characters, the program outputs
    
    phrase = "What the hell is that";
    phrase += " " + phrase.substr(5, 3); // This is not a specific case, but
                                         // rather a unique way of appending
                                         // a set of characters in a string
                                         // to the end of the string
    cout << phrase << endl;
    
    // W H A T  [SPACE]  T H E  [SPACE]  H E  L  L
    // 0 1 2 3     4     5 6 7     8     9 10 11 12
    
    cout << "Find Letter: " << phrase.find_first_of("e") << endl;
    
    // Will output 7. This maens it found the first instance of character
    // "e" at index 7. Note that once it finds the character(s), it stops
    // looking
    
    cout << "Find Letter 2: " << phrase.find_first_of("that") << endl;
    spacing();
    
    // When typing multiple characters, find first of DOES NOT look for the
    // whole word. It looks at each individual character:
    // T H A
    // and attempts to find the first instance of ONLY ONE of these
    // characters (whichever it finds first. Once found, it terminates).
    // Output will be 1. This is because it found "h" at index 1.
    
    if (phrase.find_first_of("!") == -1) {
        cout << "CHARACTER NOT FOUND" << endl;
    }
    
    // Find first of finds the index the character is at by using an
    // unsigned long. Recall that an unsigned long is not only very big,
    // but also ONLY contains positive numbers. This is because there can't
    // be a negative index (indexing starts at 0 aand goes up, not down).
    // Therefore, if the program cannot find the character, find first of
    // outputs -1 to represent that it could not find any instance of the
    // character (basically saying that it does not exist).
    
    phrase = "What the hell!"; // Added exclamation point at the end
    
    if (phrase.find_first_of("!") == -1) {
        cout << "CHARACTER NOT FOUND" << endl;
    }
    else {
        cout << "CHARACTER FOUND" << endl; // The program will find it
    }
    
    
    
    if (phrase.compare("What the hell!") == 0) { // Matches exactly
        cout << "EQUAL" << endl;
    }
    
    // You can use compare to see if a specific set of characters
    // match a string.
    
    if (phrase.compare("What") == 0) { // Replace 0 with 1 to see in action
        cout << "EQUAL" << endl;
    }
    else {
        cout << "NOT EQUAL" << endl; // This will output
    }
    
    // You can replace 0 with 1 to reverse the matching:
    //
    // Find exactly these characters in this string. If it is a 1:1 match,
    // output 0
    //
    // Find exactly these characters in this string. If it is NOT a 1:1
    // match, output 1
    
    if (phrase == "What the hell!" ) { // Using "==" also works
        cout << "EQUAL" << endl;
    }
}
