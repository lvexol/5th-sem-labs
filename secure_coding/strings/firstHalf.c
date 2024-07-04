#include <stdio.h>
#include <string.h>

void firstHalf(const char* str, char* result) {
    int length = strlen(str);
    int halfLength = length / 2;
    strncpy(result, str, halfLength);
    result[halfLength] = '\0';
}

int main() {
    const char* input = "WooHoo";
    char output[100];
    firstHalf(input, output);
    printf("First half: %s\n", output);
    return 0;
}