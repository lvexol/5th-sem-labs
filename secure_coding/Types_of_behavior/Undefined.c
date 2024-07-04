#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int index = 6; // Index of element not present in the array

    printf("Element at index %d is %d\n", index, arr[index]);

    return 0;
}