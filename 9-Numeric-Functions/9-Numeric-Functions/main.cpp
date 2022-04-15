#include <iostream>
#include <cmath> // Gives access to the math functions

using namespace std;

void spacing() {
    cout << endl;
}

int main() {
    cout << "Square Root: " << sqrt(25) << endl; // Gets the square root of
                                                 // the number
    
    cout << "Power: " << pow(10, 2) << endl; // 10, 2 is the same as 10^2
    spacing();
    
    cout << "Not A Number: " << sqrt(-25) << endl;
    cout << "Hard Coded: " << NAN << endl; // You can also hard code these
                                           // special values in
    
    // This will output "nan" (not a number). This is called a special
    // value (since the program cannot output a number)
    
    cout << "Infinity: " << pow(9, 999) << endl;
    cout << "Hard Coded: " << INFINITY << endl;
    
    // The second special value (number goes into infinity)
    
    cout << "Negative Infinity: " << pow(-9, 999) << endl;
    cout << "Hard Coded: " << -INFINITY << endl;
    spacing();
    
    // The third special value (number goes into negative infinity)
    
    // SUMMARY:
    //
    // remainder: Gets the remainder, but can go into the negatives with doubles
    // Modulous: Gets the remainder of INTS only
    // fmod: Gets the remainder of ints and doubles
    
    cout << "Remainder: " << remainder(7.5, 2.1) << endl;
    //cout << "Remainder Two: " << 10 % 3.25 << endl; // This won't work
    cout << "Remainder Two: " << 10 % 3 << endl;      // But this will
    
    // Modulous Operator (always gives integer values)
    // Remainder function (always gives floating point values)
    //
    // The remainder function will always work better than Modulous
    // Operators, since the accuracy is always correct. Plus, it can handle
    // ints and some doubles
    
    // However, remainder is only good for *SOME* doubles. Try entering
    // remainder(7.5, 2.1) in line 35 and see what outputs
    //
    // You'll notice the output is -0.9. Here's how the program is doing that:
    //
    // 7.5 - 2.1 = 5.4
    // 5.4 - 2.1 = 3.3
    // 3.3 - 2.1 = 1.2 <-- You would think it stops here, but it continues
    // 1.2 - 2.1 = -0.9
    //
    // At this point, the program stops and gives the output.
    // Remainder will continue reducing until it passes 0.99 (inclusive)
    // This is where truncation (fmod) comes in handy. Try entering the same
    // digits into fmod
    
    cout << "Remainder Three: " << fmod(7.5, 2.1) << endl;
    spacing();
    
    // Look at line 53. This is the proper remainder.
    
    
    /*
        COMPARING NUMBERS
    */
    
    
    // SUMMARY:
    //
    // ceil: Rounds the number up to the nearest whole number, regardless of
    //       the numbers after the decimal
    // floor: Rounds the number down to the nearest whole number, regardless of
    //        the numbers after the decimal
    // trunc: Rounds the number towards 0 based on the sign of the number
    //        (ie. positive numbers round down, negative round up)
    // round: Rounds the number like humans do. Rounding to the nearest whole
    //        number (decimal values matter). Based on 0.49 (down) and 0.50
    //        (up).
    
    // Determines the highest number inside the argument
    // fmax - Find Maximum (Number)
    cout << "Highest Num: " << fmax(4, 15) << endl;
    
    // Determines the lowest number inside the argument
    // fmin - Find Minimum (Number)
    cout << "Lowest Num: " << fmin(4, 15) << endl;
    spacing();
    
    // "ceil" for ceiling. Rounds the number up (hence to the ceiling)
    cout << "Rounding Ceil (+): " << ceil(2.01) << endl;
    
    // Ceil means to go up. Look at the chart below. -2 is above -2.5, so
    // ceil rounds -2.5 to -2
    cout << "Rounding Ceil (-): " << ceil(-2.5) << endl;
    spacing();
    
    // Rounds the number down
    cout << "Rounding Floor (+): " << floor(2.99) << endl;
    
    // Floor means to go down. Look at the chart below. -3 is below -2.5, so
    // floor rounds -2.5 to -3
    cout << "Rounding Floor (-): " << floor(-2.5) << endl;
    spacing();
    
    // 3
    // 2
    // 1
    // 0
    // -1
    // -2
    // -2.5  <--
    // -3
    
    // Another way of rounding, but it's direction depends on the sign
    cout << "Rounding trunc (+): " << trunc(2.5) << endl;
    
    // Rounding a negative number goes the opposite direction
    cout << "Rounding trunc (-): " << trunc(-2.5) << endl;
    spacing();
    
    // We can conclude that trunc rounds the number towards 0, based on
    // the sign it has. If it is positive, it will round the number down. If
    // it is negative, it will round the number up
    
    // Another way to round. This option rounds like humans do (rounding to
    // the nearest whole number)
    cout << "Normal rounding 1 (+): " << round(1.49) << endl; // Rounds to 1
    cout << "Normal rounding 2 (+): " << round(1.5) << endl;  // Rounds to 2
    
    cout << "Normal rounding 3 (-): " << round(-1.49) << endl;
    cout << "Normal rounding 4 (-): " << round(-1.50) << endl;
    
}
