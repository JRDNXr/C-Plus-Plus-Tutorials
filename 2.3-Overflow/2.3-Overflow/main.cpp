#include <iostream>

using namespace std;

int main() {
    char x = 128; // char can hold values between (inclusive) -128 and
                  // 127. Since this number is 1 above the max, it will NOT
                  // output 128. The number is passed all the way down
                  // to the minimum value. In this case, it becomes -128.
                  // We call this Overflow.
                  //
                  // 127
                  // 126
                  // 125
                  // ...
                  // -125
                  // -126
                  // -127
                  // -128
    
                  // An easier way to think of it is like this:
                  // -127
                  // -128
                  // 127
                  // 126
                  // 125
                  //
                  // Going one up then makes it -128. It becomes an endless
                  // cycle
    
    cout << (int) x << endl;
}
