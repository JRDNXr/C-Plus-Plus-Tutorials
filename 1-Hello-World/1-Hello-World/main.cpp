#include <iostream> // Basic input output stream

using namespace std; // std stands for "Standard"
                     // Without this, you would have to manually enter std::cout and std::endl (see 1.1_Hello-World)

// using std::cout;       // An alternative to using namespace

int main() { // The start of every program must have main (main function)
             // int (integer) is called a return type
    
    cout << "Hello, World!" << endl; // cout is used to print text to the console (also calld an operator)
}

/*
    Compilation
    The pre-processor is something that happens before all of the code is
    compiled.
 
    Look at "#include <iostream>". The pre-processor looks at this, takes
    the content of the file (iostream), and puts it inside of our program
    in order to make it available to us.
 
    The Compiler then takes the code and translates it into machine code (a
    language for the computer to understand). Once the computer understands
    everything that is going on, our code runs.
 
    Definitions
        - Header (#include <iostream> - Line 1)
        - Namespace (using namespace - Line 3)
        - Function (int main - Line 6)
        - Class
        - Object
        - Operator
 
    Namespace
    "using namespace std": Also calld "using directive". Takes everything
    from the name (in this case, standard, a.k.a. std) namespace and makes
    it available directly in the code. This is why we don't need to prefix
    "cout".
 
    "using std::cout": Also called "using declaration". Very similar to
    using directive, except we are only pulling cout from the standard
    namespace, rather than everything.
 
    
*/
