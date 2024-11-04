#include <stdio.h>

void revarr(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 5, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]); // Correctly calculate the number of elements

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline for better readability

    revarr(arr, size); // Correctly call the function

    printf("Reversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline for better readability

    return 0;
}