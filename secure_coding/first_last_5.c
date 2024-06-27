#include <stdbool.h>

bool firstLast6(int arr[], int length) {
    return arr[0] == 6 || arr[length - 1] == 6;
}

// Test cases
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 6};
    int arr2[] = {6, 1, 2, 3};
    int arr3[] = {13, 6, 1, 2, 3};
    
    printf("%d\n", firstLast6(arr1, 3));  // Output: 1 (true)
    printf("%d\n", firstLast6(arr2, 4));  // Output: 1 (true)
    printf("%d\n", firstLast6(arr3, 5));  // Output: 0 (false)
    
    return 0;
}
