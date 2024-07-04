#include <stdio.h>
#include <string.h>

void extraEnd(char* str) {
    int len = strlen(str);
    if (len >= 2) {
        char lastTwo[3];
        strncpy(lastTwo, str + len - 2, 2);
        lastTwo[2] = '\0';
        printf("%s%s%s\n", lastTwo, lastTwo, lastTwo);
    }
}

int main() {
    char str1[] = "Hello";
    extraEnd(str1);

    char str2[] = "ab";
    extraEnd(str2);

    char str3[] = "Hi";
    extraEnd(str3);

    return 0;
}