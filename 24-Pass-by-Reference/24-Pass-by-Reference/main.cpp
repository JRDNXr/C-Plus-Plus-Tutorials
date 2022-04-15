#include <iostream>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    
    std::cout << "1: " << a << "\t" << "2: " << b;
    
    // 1 - When we pass by value in this function, the integers will be swapped
    // However, going to line 36, you'll notice the integers are exactly
    // the same as we previously initialized them to be
}

void swap_by_reference(int &a, int &b) {
    // & symbol is used to pass by reference
    
    int temp = a;
    a = b;
    b = temp;
    
    std::cout << "3: " << a << "\t" << "4: " << b;
    
    // 3 - However, if we waant to update the variables globally, we can
    // pass by reference
}

int main() {
    int a = 10;
    int b = 20;
    
    swap_by_value(a, b);
    std::cout << "\n";
    
    std::cout << a << "\t" << b << "\n";
    // 2 - This is because we are passing by value. It only affects the variable
    // locally
    
    swap_by_reference(a, b);
    std::cout << "\n";
    
    std::cout << a << "\t" << b << "\n";
    // 4 - Notice that the values remain changed even when are not in the
    // function anymore
    
    return 0;
}
