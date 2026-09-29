
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int maxLen = 0;

    scanf("%999s", s);

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int count = 0;

        for (int j = i; j < n; j++) {
            unsigned char ch = s[j];

            if (visited[ch] == 1) {
                break;
            }

            visited[ch] = 1;
            count++;

            if (count > maxLen) {
                maxLen = count;
            }
        }
    }

    printf("%d", maxLen);

    return 0;
}