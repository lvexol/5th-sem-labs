#include <stdbool.h>

bool has23(int arr[]) {
    return arr[0] == 2 || arr[0] == 3 || arr[1] == 2 || arr[1] == 3;
}

#include <stdio.h>

int main() {
    int arr1[] = {2, 5};
    int arr2[] = {4, 3};
    int arr3[] = {4, 5};
    
    printf("%s\n", has23(arr1) ? "true" : "false");  // Output: true
    printf("%s\n", has23(arr2) ? "true" : "false");  // Output: true
    printf("%s\n", has23(arr3) ? "true" : "false");  // Output: false
    
    return 0;
}
