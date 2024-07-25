#include <stdio.h>

#include <string.h>

void process_input(char *user_input) {

char buffer[10];

strcpy(buffer, user_input); // Vulnerable to buffer overflow

printf("User input: %s\n", buffer);

}

int main() {

char input[20];

printf("Enter your input: ");

gets(input); // Unsafe function, susceptible to buffer overflow

process_input(input);

return 0;

}