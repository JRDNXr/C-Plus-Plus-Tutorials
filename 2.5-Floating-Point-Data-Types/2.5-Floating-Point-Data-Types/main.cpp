#include <iostream>
#include <climits>
#include <float.h> // Allows us to see how many significant digits from a                  // particular data type we can trust

using namespace std;

int main() {
    float f = 0;
    double d = 7.7E4; // Same as saying 77,000 (7.7 x 10^4)
                      // E stands for exponent
                      // 7.7E4 means move the decimal point 4 spaces to the
                      // right
                      // 7.7E4 = 77000.0 (or just 77,000)
    long double ld = 0;
    
    // Float is the least trusthworthy of the floating-types
    // (Has the least accuracy)
    cout << "Size of Float: " << sizeof(float) << endl;
    cout << "Float Minimum: " << FLT_MIN << endl;
    cout << "Float Maximum: " << FLT_MAX << endl;
    cout << "Float Accuracy: " << FLT_DIG << endl;
    
    // DIG stands for digits. This will allow us to see how many digits
    // the data type is accurate until
    
    cout << endl;
    
    cout << "Size of Double: " << sizeof(double) << endl;
    cout << "Double Minimum: " << DBL_MIN << endl;
    cout << "Double Maximum: " << DBL_MAX << endl;
    cout << "Double Accuracy: " << DBL_DIG << endl;
    cout << endl;
    
    cout << "Size of Long Double: " << sizeof(long double) << endl;
    cout << "Long Double Minimum: " << LDBL_MIN << endl;
    cout << "Long Double Maximum: " << LDBL_MAX << endl;
    cout << "Long Double Accuracy: " << LDBL_DIG << endl;
    cout << endl;
    
    cout << f << endl;
    cout << d << endl;
    cout << ld << endl;
}
