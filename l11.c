#include <stdio.h>

void printExponent(double num) {
    // Pointer to the memory location of the double variable
    unsigned long long* p = (unsigned long long*)&num;

    // Extracting the exponent part using bitwise operations
    unsigned long long exponent = (*p >> 52) & 0x7FF;

    // Converting the exponent to hexadecimal and binary formats
    char hex[4];
    sprintf(hex, "0x%llX", exponent);
    char binary[12];
    for (int i = 0; i < 11; i++) {
        binary[i] = (exponent >> (10 - i)) & 1 ? '1' : '0';
    }
    binary[11] = '\0';

    // Printing the results
    printf("Hexadecimal exponent: %s\n", hex);
    printf("Binary exponent: %s\n", binary);
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}


