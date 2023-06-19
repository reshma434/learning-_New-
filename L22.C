#include <stdio.h>

void printBits(unsigned int num);

int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    
    printf("Bits: ");
    printBits(num);
    
    return 0;
}

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit
    
    for (i = 0; i < 32; i++) {
        // Use bitwise AND to check if the bit is set or not
        if (num & mask)
            printf("1");
        else
            printf("0");
        
        // Shift the mask to the right by 1 bit
        mask >>= 1;
    }
    
    printf("\n");
}
