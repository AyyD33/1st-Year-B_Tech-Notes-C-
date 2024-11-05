#include <stdio.h>

int reverse(int *ptr1, int n){    
    int start = 0;
    int end = n - 1;
    while(start < end){
        int temp = ptr1[start];
        ptr1[start] = ptr1[end];
        ptr1[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 5, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]); // Correctly calculate the number of elements

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline for better readability

    reverse(arr, n); // Correctly call the function

    printf("Reversed Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); // Add a newline for better readability

    return 0;
}