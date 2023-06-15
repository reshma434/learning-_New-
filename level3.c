#include <stdio.h>

int main() {
    int rollNumber;
    char name[50];
    float physicsMarks, chemistryMarks, mathsMarks;
    float totalMarks, percentage;

    // Reading roll number, name, and marks from the user
    printf("Enter Roll Number: ");
    scanf("%d", &rollNumber);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Physics Marks: ");
    scanf("%f", &physicsMarks);

    printf("Enter Chemistry Marks: ");
    scanf("%f", &chemistryMarks);

    printf("Enter Maths Marks: ");
    scanf("%f", &mathsMarks);

    // Calculating total marks and percentage
    totalMarks = physicsMarks + chemistryMarks + mathsMarks;
    percentage = (totalMarks / 300) * 100;

    // Printing the summary
    printf("\n----- SUMMARY -----\n");
    printf("Roll Number: %d\n", rollNumber);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Maths Marks: %.2f\n", mathsMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}