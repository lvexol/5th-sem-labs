#include <stdio.h>

#include <string.h>

void process_string(char *input) {

char buffer[10];

strcpy(buffer, input); // Vulnerable, does not check length of input

printf("Input processed: %s\n", buffer);

}

int main() {

char input[] = "This is a long input that exceeds buffer size";

process_string(input);

return 0;

}