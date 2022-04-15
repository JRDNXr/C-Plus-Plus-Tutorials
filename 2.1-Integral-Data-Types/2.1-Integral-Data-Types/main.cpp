#include <iostream>
#include <climits> // Allows us to find the MIN and MAX of the data types

using namespace std;

int main() {
    short sh = 0; // 16-bits
    int i = 0; // 16-bits or 32-bits
    long l = 0.0; // 32-bits
    signed long long LL = 0.0; // 64-bits
    // Note signed. This is exactly the same as declaring long long. You can
    // use it in order to simplify between unsigned and signed variables
    
    // All of the above are primary Integral data types
    
    unsigned short Ush = 0;
    unsigned int Ui = 0;
    unsigned long Ul = 0;
    unsigned long long ULL = 0; // These are all the unsigned counterparts
                                // of the data types above
    
    // Unsigned data types are only positive numbers (unsigned means there
    // is no sign (hence no negative sign) attached to the numbers). This
    // means that all of the negative number signs are removed and are then
    // added to the positive numbers of the data type.
    //
    // For example, look at short. The minimum value is -32,767.
    //
    // Since there are no negative numbers in an unsigned short, we take all
    // the negative numbers, remove their signs, and add them to 32,768
    //
    // 32,768 + 32,767 = 65,535. This is the maximum value (inclusive)
    // of unsigned short
    
    // Remember the following:
    // 8-bits   =   1 byte
    // 16-bits  =   2 bytes
    // 32-bits  =   4 bytes
    // 64-bits  =   8 bytes
    
    cout << "Size of Short: " << sizeof(short) << " bytes " << endl;
    cout << "Short Minimum: " << SHRT_MIN << endl;
    cout << "Short Maximum: " << SHRT_MAX << endl;
    cout << "Unsigned Short Maximum: " << USHRT_MAX << endl;
    cout <<  endl;
    
    cout << "Size of Int: " << sizeof(int) << " bytes " <<  endl;
    cout << "Int Minimum: " << INT_MIN << endl;
    cout << "Int Maximum: " << INT_MAX << endl;
    cout << "Unsigned Int Maximum: " << UINT_MAX << endl;
    cout <<  endl;
    
    cout << "Size of Long: " << sizeof(long) << " bytes " <<  endl;
    cout << "Long Minimum: " << LONG_MIN << endl;
    cout << "Long Maximum: " << LONG_MAX << endl;
    cout << "Unsigned Long Maximum: " << ULONG_MAX << endl;
    cout <<  endl;
    
    cout << "Size of Long Long: " << sizeof(long long) << " bytes " <<  endl;
    cout << "Long Long Minimum: " << LLONG_MIN << endl;
    cout << "Long Long Maximum: " << LLONG_MAX << endl;
    cout << "Unsigned Long Long Maximum: " << ULLONG_MAX << endl;
    cout <<  endl;
    // sizeof is also an operator, NOT a function
    
    cout << sh << endl;
    cout << i << endl;
    cout << l << endl;
    cout << LL << endl;
    cout << Ush << endl;
    cout << Ui << endl;
    cout << Ul << endl;
    cout << ULL << endl;
}
