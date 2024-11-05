    #include <stdio.h>
    #include <stdlib.h>


    void shift(int arr[], int n){
        int temp = arr[n - 1];
        for(int i = 1; i < n; i++){
            arr[n - i] = arr[n - i- 1];
        }
        arr[0] = temp;
    }


    int main() {
        int arr[] = {1, 2, 3, 4, 5, 6, 8, 0, 10, 8, 12, 66, 8, 9, 234, 77, 89}; // Example array
        int size = sizeof(arr) / sizeof(int);

        // Print the original array
        printf("Original array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Reverse the array
        int shifts = 4;
        for (int i = 0; i < shifts; i++){
            shift(arr, size);
        }


        // Print the reversed array
        printf("Shifted array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }