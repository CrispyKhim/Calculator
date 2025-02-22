// Calculator Program in C !

#include <stdio.h>

int main(void) {
    // Declarae variables
    int mode;
    float num1, num2;

    // Ask the user for the mode
    printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n");
    scanf("%d", &mode);
    
    // Ask the user for first and second number
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Using switch case instead of if-statements...
    switch (mode) {
        case 1:
            printf("The sum of %f and %f is %f", num1, num2, num1 + num2);
            break;
        case 2:
            printf("The subtraction of %f and %f is %f", num1, num2, num1 - num2);
            break;
        case 3:
            printf("The multiplication of %f and %f is %f", num1, num2, num1 * num2);
            break;
        case 4:
            printf("The division of %f and %f is %f", num1, num2, num1 / num2);
            break;
        default:
            printf("Invalid mode");
    }

    // Exit the program
    return 0;
}