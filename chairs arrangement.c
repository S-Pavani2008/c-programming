#include <stdio.h>

int main() {
    int students, chairs_owned, chairs_needed;
    scanf("%d %d", &students, &chairs_owned);
    if (students > chairs_owned) {
        chairs_needed = students - chairs_owned;
        printf("%d
", chairs_needed);
    } else {
        printf("0
");
    }

    return 0;
}

