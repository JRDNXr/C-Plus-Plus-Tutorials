#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> data = {1, 2, 3};
    
    // Vectors are similar to arrays
    // Vectors have dynamic memory (meaning you can adjust the memory)
    
    data.push_back(999);
    
    // This method adds data to a vector (+1)
    
    // 1  2  3  999   - Data
    // 0  1  2  3     - Index
    // 1  2  3  4     - Elements (total: 4)
    
    cout << "Size 1: " << data.size() << endl;
    
    // Gets the size of the vector (how many elements are contained
    // within it)
    
    cout << data[3] << endl; // Outputs 999
    
    data.pop_back();
    
    // This method reduces the vector by 1 (-1)
    // Can be adjusted to reduce more
    
    cout << "Size 2: " << data.size() << endl;
    cout << endl;
    
    // Notice the size of the vector is 3...
    
    for (int i = 0; i < 4; i++) {
        cout << "Data " << i << ": " << data[i] << endl;
    }
    
    // ...However, the data still exists in memory.
    
    cout << endl;
    cout << "Vector Empty: " << data.empty() << endl;
    
    // Checks whether the vector is empty or not
    // Returns 0 (which is false)
}
