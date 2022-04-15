#include <iostream>
#include <vector>

using namespace std;

void Multidimensional_Array();
void Nested_Vectors();

int main() {
    Multidimensional_Array();
    cout << "\n";
    Nested_Vectors();
    return 0;
}

void Multidimensional_Array() {
    int grades[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    
    for(int r = 0; r < 3; r++) {
        
        for(int c = 0; c < 3; c++) {
            cout << grades[r][c] << "\t";
        }
        
        cout << "\n";
    }
}

void Nested_Vectors() {
    vector<vector<int>> grades = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for(int r = 0; r < 3; r++) {
        
        for(int c = 0; c < 3; c++) {
            cout << grades[r][c] << "\t";
        }
        
        cout << "\n";
    }
}
