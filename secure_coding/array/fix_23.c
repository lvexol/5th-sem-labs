#include <stdbool.h>

bool double23(int arr[], int length) {
    if (length == 2) {
        return (arr[0] == 2 && arr[1] == 2) || (arr[0] == 3 && arr[1] == 3);
    }
    return false;
}

#include <stdio.h>

int main() {
    int arr1[] = {2, 2};
    int arr2[] = {3, 3};
    int arr3[] = {2, 3};
    
    printf("%s\n", double23(arr1, 2) ? "true" : "false");  // Output: true
    printf("%s\n", double23(arr2, 2) ? "true" : "false");  // Output: true
    printf("%s\n", double23(arr3, 2) ? "true" : "false");  // Output: false
    
    return 0;
}
