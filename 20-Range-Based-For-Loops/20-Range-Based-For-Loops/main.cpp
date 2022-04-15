#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main() {
    int data[] = {1, 2, 3};
    
    for (int n : data) {
        cout << n << "\t";
    }
    
    cout << endl;
    
    /*int numOfElements = sizeof(data) / sizeof(int);
    
    for (int i = 0; i < numOfElements; i++) {
        cout << data[i] << "\t";
    }*/
    
    // Range Based For Loops (also called For Each loops) are very similar to For Loops, with one exception.
    // In For Each loops, you can cut down on the syntax involved (in this case, (line 17) the conditions set
    // in the For loop and the overall elements).
    //
    // Note that this can only be used to iterate through for loops. It can't be used for continuous looping
    
    vector <int> vdata = {4, 5, 6};
    
    for (int print_vdata : vdata) {
        cout << print_vdata << "\t";
    }
    
    cout << endl;
    
    // This method also works with vectors and STL arrays
    
    array <int, 3> stl_data = {7, 8, 9};
    
    for (int print_stl_data : stl_data) {
        cout << print_stl_data << "\t";
    }
    
    cout << endl;
    
}
