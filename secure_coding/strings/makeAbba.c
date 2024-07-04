#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeAbba(const char* a, const char* b) {
    size_t lenA = strlen(a);
    size_t lenB = strlen(b);
    size_t lenResult = lenA + lenB + lenB + lenA + 1; // +1 for null terminator
    char* result = malloc(lenResult * sizeof(char));

    if (result != NULL) {
        snprintf(result, lenResult, "%s%s%s%s", a, b, b, a);
    }

    return result;
}

int main() {
    const char* a = "Hi";
    const char* b = "Bye";
    char* abba = makeAbba(a, b);

    if (abba != NULL) {
        printf("%s\n", abba);
        free(abba);
    }

    return 0;
}