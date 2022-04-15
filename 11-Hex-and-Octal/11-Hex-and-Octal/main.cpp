#include <iostream>

using namespace std;

void Output_Decimal_Counterparts();
void Determine_hex_values_from_decimal();
void Determine_octal_values_from_decimal();
void spacing();

int main() {
    Output_Decimal_Counterparts();
    
    spacing();
    
    Determine_hex_values_from_decimal();
    
    spacing();
    
    Determine_octal_values_from_decimal();
}

void spacing() {
    cout << endl;
}

void Output_Decimal_Counterparts() {
    int number = 30; // Specifiy a decimal number (the normal way)
    cout << "Decimal: " << number << endl;
    
    number = 0x30; // Specify a hex number
    cout << "Hex: " << number << endl; // Outputs the decimal counterpart
    
    number = 030; // Specify an octal number
    cout << "Octal: " << number << endl; // Outputs the decimal counterpart
}

void Determine_hex_values_from_decimal() {
    int num = 30;
    
    cout << "Hex Value at " << num << ": " << hex << num << endl;
    
    // Outputs equivalent hex number at decimal value 30
}

void Determine_octal_values_from_decimal() {
    int num = 30;
    
    cout << "Octal Value at " << num << ": " << oct << num << endl;
    
    // Outputs equivalent octal number at decimal value
}
