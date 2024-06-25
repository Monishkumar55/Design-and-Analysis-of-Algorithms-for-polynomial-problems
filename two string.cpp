#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int compareChars(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
int canBreak(char *s1, char *s2, int n) {
    for (int i = 0; i < n; i++) {
        if (s1[i] < s2[i]) {
            return 0; 
        }
    }
    return 1; 
}
int checkIfCanBreak(char* s1, char* s2) {
    int n = strlen(s1);
    char *sortedS1 = (char *)malloc((n + 1) * sizeof(char));
    char *sortedS2 = (char *)malloc((n + 1) * sizeof(char));
    strcpy(sortedS1, s1);
    strcpy(sortedS2, s2);
    qsort(sortedS1, n, sizeof(char), compareChars);
    qsort(sortedS2, n, sizeof(char), compareChars);
    int result = canBreak(sortedS1, sortedS2, n) || canBreak(sortedS2, sortedS1, n);
    free(sortedS1);
    free(sortedS2);
    
    return result;
}
int main() {
    char s1[] = "abc";
    char s2[] = "ccf";
    if (checkIfCanBreak(s1, s2)) {
        printf("One string can break the other.\n");
    } else {
        printf("Neither string can break the other.\n");
    }
    return 0;
}

