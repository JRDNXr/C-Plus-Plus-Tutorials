#include <iostream>
#include <vector>
#include <array>

using namespace std;

void print_normalArray(int ps_normalArray[], int ps_numElements){
    cout << "NORMAL ARRAY" << endl;
    
    for (int i = 0; i < ps_numElements; i++) {
        cout << ps_normalArray[i] << "\t";
    }
    cout << endl;
    cout << endl;
}

void print_vectorArray(vector <int> ps_vectorArray) {
    cout << "VECTOR" << endl;
    
    for (int i = 0; i < ps_vectorArray.size(); i++) {
        cout << ps_vectorArray[i] << "\t";
    }
    
    cout << endl;
    cout << endl;
}

void print_stlArray(array <int, 5> ps_stlArray) {
    cout << "STL ARRAY" << endl;
    
    for (int i = 0; i < ps_stlArray.size(); i++) {
        cout << ps_stlArray[i] << "\t";
    }
    cout << endl;
    cout << endl;
}

int main() {
    int normalArray[] = {1, 2, 3, 4, 5};
    int numOfElements = sizeof(normalArray) / sizeof(int);
    
    print_normalArray(normalArray, numOfElements);
    
    vector <int> vectorArray = {1, 2, 3, 4, 5};
    
    print_vectorArray(vectorArray);
    
    array <int, 5> stlArray = {1, 2, 3, 4, 5};
    
    print_stlArray(stlArray);
    
    // Notice how both vectors and STL arrays are declared the same way
    // They are both "templatized"
    
    // Here's a few other differences to note about each one:
    
    // ARRAY
    //      - Static
    //      - Decay to pointer
    //      - Does not remember its size when pssed to a function
    //      - Non-assignable
    //
    // VECTORS
    //      - Dynamic
    //      - Pass by value
    //      - Remembers its size when pssed to a function
    //      - Assignable to other variables
    //
    // STL ARRAYS
    //      - Static
    //      - Pass by value
    //      - Remembers its size when pssed to a function
    //      - Assignable to other variables
    //
    // Static: A fixed state. Cannot be changed.
    // Dynamic: Can be altered at whim.
    //
    // Decay to pointer: Must reference the values to a pointer, and finally
    //                   to a value
    // Pass by value: Passes straight to a value (no pointers necessary,
    //                although you can if you please)
    //
    // Remember its size: Normal arrays do not retain their size. This is
    //                    why we must pass an additional value that
    //                    has the size of the array. Vectors and STL Arrays
    //                    remember their size
    //
    // Assignable to other variables: Normal arrays cannot pass their data
    //                                to other non-arrays or variables.
    //                                However, Vectors and STL Arrays can
}

