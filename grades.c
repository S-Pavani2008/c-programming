#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer_science;
    float total_marks, percentage;

    // Read the marks for five subjects
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer_science);

    // Calculate total marks
    total_marks = physics + chemistry + biology + mathematics + computer_science;

    // Calculate percentage (total marks out of 500)
    percentage = (total_marks / 500.0) * 100.0;

    // Determine and print the grade
    if (percentage >= 90) {
        printf("Grade A
");
    } else if (percentage >= 80) {
        printf("Grade B
");
    } else if (percentage >= 70) {
        printf("Grade C
");
    } else if (percentage >= 60) {
        printf("Grade D
");
    } else if (percentage >= 40) {
        printf("Grade E
");
    } else {
        printf("Grade F
");
    }

    return 0;
}

