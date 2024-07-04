#include <stdio.h>

void main() {
    char str[5] = "hello";  // Incorrect: bound specified is too small
    printf("%s\n", str);

    char strc[]="fuck u ";
    printf("%s\n",strc);
}
