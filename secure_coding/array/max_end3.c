void maxEnd3(int arr[], int result[]) {
    int max = arr[0] > arr[2] ? arr[0] : arr[2];
    result[0] = max;
    result[1] = max;
    result[2] = max;
}

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {11, 5, 9};
    int arr3[] = {2, 11, 3};
    int result[3];
    
    maxEnd3(arr1, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);
    
    maxEnd3(arr2, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);
    
    maxEnd3(arr3, result);
    printf("[%d, %d, %d]\n", result[0], result[1], result[2]);
    
    return 0;
}
