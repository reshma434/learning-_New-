#include <stdio.h>

void printIncreasing(int n);
void printSpaces(int n);
void printDecreasing(int n);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\n");
    
    printIncreasing(n);
    printSpaces(n);
    printDecreasing(n);
    
    return 0;
}

void printIncreasing(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = n - 1; i >= 1; i--) {
        printf(" ");
    }
}

void printDecreasing(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    printf("\n");
}













