#include <iostream>
#include <vector> // Required for STL Arrays
#include <array> // Required for STL Arrays

using namespace std;

void print_vector(array<int, 20> data) {
        
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << "\t";
    }
    
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    array<int, 20> data = {1, 2, 3};
    
    // STL Arrays (Standardized Template Arrays) are static arrays
    // They are essentially the same as vectors.
    
    // Vectors and STL Arrays have their use cases, which are shown
    // in "19-Array-Differences"
    
    print_vector(data);
}
