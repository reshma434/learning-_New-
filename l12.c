#include <stdio.h>

// Function to swap two values of any type
void swap(void* a, void* b, size_t size) {
    // Allocate memory for temporary storage
    void* temp = malloc(size);

    // Copy the value from 'a' to 'temp'
    memcpy(temp, a, size);

    // Copy the value from 'b' to 'a'
    memcpy(a, b, size);

    // Copy the value from 'temp' to 'b'
    memcpy(b, temp, size);

    // Free the temporary memory
    free(temp);
}

int main() {
    int a = 10;
    int b = 20;
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swap the values using the swap function
    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    float c = 3.14;
    float d = 2.71;
    printf("Before swap: c = %f, d = %f\n", c, d);

    // Swap the values using the swap function
    swap(&c, &d, sizeof(float));

    printf("After swap: c = %f, d = %f\n", c, d);

    return 0;
}