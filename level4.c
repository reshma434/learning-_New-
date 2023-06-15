#include<stdio.h>
int main() {
    int inputNumber;
    char operationType;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    printf("Enter the operation type (+, -, *, /): ");
    scanf(" %c", &operationType);

    result = perform Operation(inputNumber, operationType);
    printf("Result: %d\n", result);

    return 0;
}
