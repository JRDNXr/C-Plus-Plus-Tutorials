#include <iostream>

using namespace std;

// Don't read this until you've read all of int main() and below

int multiply(int x, int y) { // (int x, int y) are called parameters.
                             // The data from the arguments are now stored
                             // inside of our parameters (in this case, the
                             // value 2 is stored in variable x, and the
                             // value 4 is stored in variable y)
                             // This is the 2nd way to use a function
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl; // So you can see for yourself
    
    return x * y;
}

int main() {
    /*
        Using Functions
    */
    
    int num = pow(10, 2) * 2; // Both this and below are functions
    //pow(10, 2) * 2; // Their functions because they utilize the pow class
                    // (10, 2) are called arguments
                    // It is passing the values 10 and 2 into the function
                    // "pow" for calculation. In this case, we are taking
                    // 10 to the power of 2 (which is 100). Then, we are
                    // multiplying 100 x 2 (which is 200).
                    // This is the 1st way to use a function

    cout << num << endl;
    
    /*
        Creating Our Own Functions
    */
    
    cout << multiply(2, 4) << endl;
    
    // Look at multiply. This is just a name (also called identifier). It
    // tells the program to utilize a function with this name
    
    // But there's more. We are also passing values into our function (in
    // this case, 2 and 4). Remember that these are called arguments.
    
    // So the program is utilizing the function "multiply" and when it does,
    // it is going to pass values 2 and 4 into it. But now what? Go to line
    // 7 for more
    
    return 0;
}
