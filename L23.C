#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a digit: %d\n", largestNumber);

    return 0;
}

int findLargestNumber(int num) {
    int largestNumber = 0;

    for (int i = 0; i < 4; i++) {
        int temp = num / 10; // Remove the current digit
        int divisor = 1;

        for (int j = 0; j < 3; j++) {
            divisor *= 10;
        }

        int newNumber = temp * divisor + (num % divisor); // Reconstruct the number without the current digit

        if (newNumber > largestNumber) {
            largestNumber = newNumber;
        }

        num = newNumber; // Update the number for the next iteration
    }

    return largestNumber;
}
