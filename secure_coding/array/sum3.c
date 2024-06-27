int sum3(int arr[]) {
    return arr[0] + arr[1] + arr[2];
}

// Test cases
#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {5, 11, 2};
    int arr3[] = {7, 0, 0};
    
    printf("%d\n", sum3(arr1));  // Output: 6
    printf("%d\n", sum3(arr2));  // Output: 18
    printf("%d\n", sum3(arr3));  // Output: 7
    
    return 0;
}
