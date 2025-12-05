#include <stdio.h>

int main() {
    int a, b;

    // Read the two integers from input
    scanf("%d %d", &a, &b);

    // Swap the values using arithmetic operations
    a = a + b; // a now holds the sum of original a and b
    b = a - b; // b now holds the original value of a (a+b - b)
    a = a - b; // a now holds the original value of b (a+b - original a)

    // Print the swapped values
    printf("%d
%d
", a, b);

    return 0;
}
