#include <stdio.h>
#include <string.h>

void withoutEnd(char* str) {
    int len = strlen(str);
    if (len >= 2) {
        str[len - 1] = '\0';
        printf("%s\n", str + 1);
    }
}

int main() {
    char str[] = "Hello";
    withoutEnd(str);

    return 0;
}