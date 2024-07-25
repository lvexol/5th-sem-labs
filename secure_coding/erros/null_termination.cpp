#include <iostream>

#include <cstring>

using namespace std;

int main() {

char str[10]; // Buffer for 10 characters

strncpy(str, "Hello", 5); // No room for null terminator

cout << "Length of str: " << strlen(str) << endl; // Undefined behavior, strlen may go out of bounds

return 0;

}