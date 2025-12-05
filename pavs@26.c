#include <stdio.h>
#include <string.h>

int main() 
{
    char sentence[200];
    char *word;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    word = strtok(sentence, " ");
    printf("Words:\n");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
return 0;
}

