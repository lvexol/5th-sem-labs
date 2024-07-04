#include <stdio.h>

void helloName(const char* name) {
    printf("Hello %s!\n", name);
}

int main() {
    helloName("Bob");
    helloName("Alice");
    helloName("X");
    return 0;
}