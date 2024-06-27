#include <stdbool.h>

bool sameFirstLast(int arr[], int length) {
    return length >= 1 && arr[0] == arr[length - 1];
}

// Test cases
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3, 1};
    int arr3[] = {1, 2, 1};
    
    printf("%d\n", sameFirstLast(arr1, 3));  // Output: 0 (false)
    printf("%d\n", sameFirstLast(arr2, 4));  // Output: 1 (true)
    printf("%d\n", sameFirstLast(arr3, 3));  // Output: 1 (true)
    
    return 0;
}
