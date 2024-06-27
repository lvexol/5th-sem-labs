int sum2(int arr[], int length) {
    if (length >= 2) {
        return arr[0] + arr[1];
    } else if (length == 1) {
        return arr[0];
    } else {
        return 0;
    }
}

#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 1};
    int arr3[] = {1, 1, 1, 1};
    
    printf("%d\n", sum2(arr1, 3));  // Output: 3
    printf("%d\n", sum2(arr2, 2));  // Output: 2
    printf("%d\n", sum2(arr3, 4));  // Output: 2
    
    return 0;
}
