#include <iostream>

void division(int num1, int num2) {
    num1 /= num2; // 5 / 5 = 1
    
    std::cout << num1 << "\n";
}

void division(int num1) {
    num1 /= num1; // 5 / 5 = 1
    std::cout << num1 << "\n";
}

void multiply(int num1, int num2 = 1) {
    num1 *= num2; // First time it passes: 2 * 2 = 4
                  // Second time it passes: 2 * 1 = 2
    
    // "int num2 = 1" : This is known as a default argument. It will
    // automatically make num2 = 1 if no value is passed to it. Take
    // "multiply(2)" for instance. Here, we are only passing one value
    // (we are passing the value 2 to the variable num1). In this process,
    // num2 would be underfined, but because we have setup a default
    // argument, it makes it automatically 1.
    //
    // This is also why the below function will not work.
    
    
    std::cout << num1 << "\n";
}

/*void multiply(int num1) {
    
}*/

// This will cause an error known as "ambiguous". This means that the
// program doesn't know which function is being called

int main() {
    division(5, 5);
    division(5);
    
    multiply(2, 2);
    multiply(2);
    return 0;
}

// Function Overloading means having multiple functions with the same name,
// but passing different arguments.

//
