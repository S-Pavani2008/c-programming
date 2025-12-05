#include <stdio.h>
#include <ctype.h> // Required for the tolower function

int main() {
    char color_code;
    scanf("%c", &color_code);

    // Convert the input character to lowercase to handle case-insensitivity
    char lower_code = tolower(color_code);

    switch (lower_code) {
        case 'v':
            printf("Violet
");
            break;
        case 'i':
            printf("Indigo
");
            break;
        case 'b':
            printf("Blue
");
            break;
        case 'g':
            printf("Green
");
            break;
        case 'y':
            printf("Yellow
");
            break;
        case 'o':
            printf("Orange
");
            break;
        case 'r':
            printf("Red
");
            break;
        default:
            printf("-1
");
            break;
    }

    return 0;
}

