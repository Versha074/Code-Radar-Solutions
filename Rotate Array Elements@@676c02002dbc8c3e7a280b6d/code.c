#include <stdio.h>
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int N, int K) {
    K = K % N;  // In case K is larger than N

    // Step 1: Reverse the whole array
    reverse(arr, 0, N - 1);
    
    // Step 2: Reverse first K elements
    reverse(arr, 0, K - 1);
    
    // Step 3: Reverse the remaining elements
    reverse(arr, K, N - 1);
}

int main() {
    int N, K;
    
    // Taking input
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    
    // Rotate the array
    rotateArray(arr, N, K);
    
    // Print the rotated array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
