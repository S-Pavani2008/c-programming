#include <stdio.h>

int main() {
    int num1, num2;

    // Read the two integers from a single line input
    scanf("%d %d", &num1, &num2);

    // Perform and print the arithmetic operations
    printf("Sum:%d
", num1 + num2);
    printf("Difference:%d
", num1 - num2);
    printf("Product:%d
", num1 * num2);
    printf("Quotient:%d
", num1 / num2); // Integer division
    printf("Remainder:%d
", num1 % num2); // Modulo operation

    return 0;
}
