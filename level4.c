#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    // Read inputs
    printf("Enter Operand 1: ");
    scanf("%f", &operand1);

    printf("Enter Operator (+, -, *, /): ");
    getchar(); // Consume the newline character
    scanf("%c", &operator);

    printf("Enter Operand 2: ");
    scanf("%f", &operand2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                return 1; // Exit the program with an error status
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit the program with an error status
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}