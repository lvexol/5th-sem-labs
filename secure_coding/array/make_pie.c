#include <stdio.h>

void makePi(int arr[]) {
    arr[0] = 3;
    arr[1] = 1;
    arr[2] = 4;
}

// Test function
int main() {
    int pi[3];
    makePi(pi);
    
    printf("[%d, %d, %d]\n", pi[0], pi[1], pi[2]);  // Output: [3, 1, 4]
    
    return 0;
}
