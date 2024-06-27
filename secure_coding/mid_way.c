void middleWay(int a[], int b[], int result[]) {
    result[0] = a[1];
    result[1] = b[1];
}

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int result1[2];
    
    middleWay(arr1, arr2, result1);
    printf("[%d, %d]\n", result1[0], result1[1]);  // Output: [2, 5]
    
    int arr3[] = {7, 7, 7};
    int arr4[] = {3, 8, 0};
    int result2[2];
    
    middleWay(arr3, arr4, result2);
    printf("[%d, %d]\n", result2[0], result2[1]);  // Output: [7, 8]
    
    int arr5[] = {5, 2, 9};
    int arr6[] = {1, 4, 5};
    int result3[2];
    
    middleWay(arr5, arr6, result3);
    printf("[%d, %d]\n", result3[0], result3[1]);  // Output: [2, 4]
    
    return 0;
}
