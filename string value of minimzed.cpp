#include <stdio.h>
#include <string.h>
void minimizeCost(char *s) {
    int n = strlen(s);
    int count[26] = {0}; 
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            count[s[i] - 'a']++;
        } else {
            int minCount = count[0], minIndex = 0;
            for (int j = 1; j < 26; j++) {
                if (count[j] < minCount) {
                    minCount = count[j];
                    minIndex = j;
                }
            }
            s[i] = 'a' + minIndex;
            count[minIndex]++;
        }
    }
}
int main() {
    char s[] = "a?b??a";
    minimizeCost(s);
    printf("Result: %s\n", s); 
    return 0;
}

