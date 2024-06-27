#include <stdbool.h>

bool no23(int arr[]) {
    return arr[0] != 2 && arr[0] != 3 && arr[1] != 2 && arr[1] != 3;
}

#include <stdio.h>

int main() {
    int arr1[] = {4, 5};
    int arr2[] = {4, 2};
    int arr3[] = {3, 5};
    
    printf("%s\n", no23(arr1) ? "true" : "false");  // Output: true
    printf("%s\n", no23(arr2) ? "true" : "false");  // Output: false
    printf("%s\n", no23(arr3) ? "true" : "false");  // Output: false
    
    return 0;
}
