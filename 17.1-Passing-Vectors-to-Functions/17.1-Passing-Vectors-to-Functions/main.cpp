#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector <int> data) {
    // Remember that you must specify what the type is in the
    // paramater heading
    
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << "\t";
    }
    cout << endl;
}

int main() {
    vector <int> data = {1, 2, 3};
    
    print_vector(data);
    
    // Vector arrays are passed just like normal arrays. You only
    // include the variable name in the function argument
}
