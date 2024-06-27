#include <stdbool.h>

bool commonEnd(int a[], int aLength, int b[], int bLength) {
    return (a[0] == b[0]) || (a[aLength - 1] == b[bLength - 1]);
}

// Test cases
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {7, 3};
    int arr3[] = {7, 3, 2};
    int arr4[] = {1, 3};
    
    printf("%d\n", commonEnd(arr1, 3, arr2, 2));  // Output: 1 (true)
    printf("%d\n", commonEnd(arr1, 3, arr3, 3));  // Output: 0 (false)
    printf("%d\n", commonEnd(arr1, 3, arr4, 2));  // Output: 1 (true)
    
    return 0;
}
