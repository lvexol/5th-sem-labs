#include <stdio.h>

int main() {
    int a = 10;
    int b;
    int result;

    printf("Enter the value of b: ");
    scanf("%d", &b);

    result = a / b;  // Division by zero

    printf("The result is: %d\n", result);

    return 0;
}