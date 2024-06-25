#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    char *word;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }
    word = strtok(sentence, " ");
    while (word != NULL) {
        printf("%s\n", word);
        word = strtok(NULL, " ");
    }
}
