#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Main rotation function
void rotateLeft(int arr[], int n, int positions) {
    if (positions == 0 || positions >= n) return;

    // Step 1: Reverse first 'positions' elements
    reverse(arr, 0, positions - 1);

    // Step 2: Reverse remaining elements
    reverse(arr, positions, n - 1);

    // Step 3: Reverse the entire array
    reverse(arr, 0, n - 1);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions = 3;

    printf("Original: ");
    for (int i = 0; i < n; i++) {
        cout<<arr[i];
    }

    rotateLeft(arr, n, positions);

    printf("\nRotated: ");
    for (int i = 0; i < n; i++) {
        cout<<arr[i];
    }

    return 0;
}
