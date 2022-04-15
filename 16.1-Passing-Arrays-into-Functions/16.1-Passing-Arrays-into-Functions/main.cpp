#include <iostream>

using namespace std;

void spacing();
void printArray(int[], int); // When declaring an function with an array
                             // parameter, remember to use [] beside the
                             // data-type

int main() {
    int myArr[] = {1, 2, 3, 4, 5};
    int numOfElements = sizeof(myArr) / sizeof(int);
    
    // This takes the size of the array in bytes (since there are 5
    // elements, it will be 20 bytes) and divides by an int (which will
    // default to 4. It's a cleaner way of writing "sizeof(myArr[0])");
    
    printArray(myArr, numOfElements);
    
    // Here we are not passing the array declaration,
    // but rather we are passing the array and all of its
    // values. We do this simply by typing the array variable.
    
    spacing();
}

void spacing() {
    cout << endl;
}

void printArray(int passedArray[], int passed_num_of_elements) {
    cout << passed_num_of_elements << endl; // Outputs 6 (6 elements in the
                                            // array)
    
    // When passing an array to a function, it loses its size. This causes
    // an issue if we try to print the array in a function.
    //
    // We already got the size of the array in line 12. Nothing changed
    // in the array. So, we can simply pass the size of the array
    // (numOfElements) into the function as well. This allows us to then
    // print the array, as shown below:
    
    for (int i = 0; i < passed_num_of_elements; i++) {
        cout << passedArray[i] << "\t";
    }
}
