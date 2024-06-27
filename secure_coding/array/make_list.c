#include <stdlib.h> // for malloc

int* makeLast(int arr[], int length) {
    int* result = (int*) malloc(sizeof(int) * (2 * length));
    
    // Fill the new array with zeros
    for (int i = 0; i < 2 * length; ++i) {
        result[i] = 0;
    }
    
    // Set the last element of the new array to be the same as the last element of the original array
    result[2 * length - 1] = arr[length - 1];
    
    return result;
}

#include <stdio.h>

void printArray(int arr[], int length) {
    printf("[");
    for (int i = 0; i < length; ++i) {
        printf("%d", arr[i]);
        if (i != length - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}

int main() {
    int arr1[] = {4, 5, 6};
    int* result1 = makeLast(arr1, 3);
    printArray(result1, 6);  // Output: [0, 0, 0, 0, 0, 6]
    free(result1);
    
    int arr2[] = {1, 2};
    int* result2 = makeLast(arr2, 2);
    printArray(result2, 4);  // Output: [0, 0, 0, 2]
    free(result2);
    
    int arr3[] = {3};
    int* result3 = makeLast(arr3, 1);
    printArray(result3, 2);  // Output: [0, 3]
    free(result3);
    
    return 0;
}
