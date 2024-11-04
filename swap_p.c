#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *ptr1, int *ptr2) {
    int com;         // Temporary variable to hold one of the values during swapping
    com = *ptr1;     // Store the value pointed to by ptr1 in com
    *ptr1 = *ptr2;   // Assign the value pointed to by ptr2 to ptr1
    *ptr2 = com;     // Assign the stored value in com to ptr2
}

int main() {
    int n1;          // Variable to store the first integer
    int n2;          // Variable to store the second integer
    
    // Prompt user for input for the first integer
    printf("x: ");
    scanf("%d", &n1);
    
    // Prompt user for input for the second integer
    printf("y: ");
    scanf("%d", &n2);
    
    // Swap the values of n1 and n2
    printf("\nThe Swapped Numbers:\n");
    swap(&n1, &n2);
    
    // Print the swapped values
    printf("x: %d\ny: %d\n", n1, n2);
    
    return 0;  // Indicate successful program termination
}
