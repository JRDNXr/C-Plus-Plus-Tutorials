#include <iostream>

using namespace std;

int main() {
    int values[] = {1, 2, 3, 4, 7}; // Declaring an array with values
    int values2[5] = {1, 2, 3, 4, 7}; // Saame thing, except we are defining
                                      // the space in an array to 5
    
    // cout << values2[6] << endl;
    // Index 6 is outside of the scope of the array, so it will give
    // an error.
    
    cout << "Arr: " << sizeof(values2) << endl;
     
    // This array has 5 elements.
    //
    // 1  2  3  4  7   <-  Elements
    // 0  1  2  3  4   <-  Index
    //
    // Elements count like humans do (exactly like length does).
    // Index values start at 0 (inclusive).
    //
    // So while the value "7" is at index "4", it is still the 5th element
    // in the array
    
    cout << values[4] << endl;
    
    int sizeOfArray = sizeof(values);
    
    cout << sizeOfArray << endl;
    
    // size will be equal to 20. This actually means 20 bytes
    //
    // Each elements takes up 4 bytes (4 bytes x 5 elements = 20 bytes)

    sizeOfArray = sizeof(values) / 4;
    
    // We can replace 4 with this: sizeof(values[0]);
    // This is getting the size of an element at the 0th index. Since we
    // know each element is 4 bytes, this will give 4 as an answer. This
    // technique makes arrays more scalable.
    
    for (int i = 0; i < sizeOfArray; i++) {
        cout << values[i] << "\t";
    }
    
    // Arrays in C++ don't know how many values they can hold.
    // This is exactly why we can't use values.length or values.size.
    //
    // To circumvent this, we use sizeof to assist in determining the size
    // of the array. However, since it returns the answer in bytes, we need
    // to also divide this number by the number of elements in the array.
    //
    // IMPORTANT:
    // ** Hard coding 4 above is not recommended. Using:
    // sizeof(values[0]); is more scalable and appropriate **
    
    cout << endl;
}
