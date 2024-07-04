#include <stdio.h>
#include <string.h>

void firstTwo(char* str, char* result) {
    if (strlen(str) < 2) {
        strcpy(result, str);
    } else {
        strncpy(result, str, 2);
        result[2] = '\0';
    }
}

int main() {
    char str[] = "Hello";
    char result[3];
    firstTwo(str, result);
    printf("%s\n", result);
    return 0;
}