void reverse3(int arr[], int result[]) {
    result[0] = arr[2];
    result[1] = arr[1];
    result[2] = arr[0];
}

// Test cases
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {5, 11, 9};
    int arr3[] = {7, 0, 0};
    int result[3];
    
    reverse3(arr1, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);  // Output: [3, 2, 1]
    
    reverse3(arr2, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);  // Output: [9, 11, 5]
    
    reverse3(arr3, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);  // Output: [0, 0, 7]
    
    return 0;
}
