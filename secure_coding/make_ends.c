void makeEnds(int arr[], int length, int result[]) {
    result[0] = arr[0];
    result[1] = arr[length - 1];
}

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int result1[2];
    
    makeEnds(arr1, 3, result1);
    printf("[%d, %d]\n", result1[0], result1[1]);  // Output: [1, 3]
    
    int arr2[] = {1, 2, 3, 4};
    int result2[2];
    
    makeEnds(arr2, 4, result2);
    printf("[%d, %d]\n", result2[0], result2[1]);  // Output: [1, 4]
    
    int arr3[] = {7, 4, 6, 2};
    int result3[2];
    
    makeEnds(arr3, 4, result3);
    printf("[%d, %d]\n", result3[0], result3[1]);  // Output: [7, 2]
    
    return 0;
}
