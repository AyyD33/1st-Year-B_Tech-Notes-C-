#include <stdio.h>
#include <string.h>

// Function to count the number of characters in a string
int count(char *str1) {
    int count = 0; // Initialize a counter to zero
    // Loop through each character in the string until the null terminator is reached
    while (*str1 != '\0') {
        count++; // Increment the counter for each character
        str1++; // Move to the next character in the string
    }
    return count; // Return the total count of characters
}

int main() {
    char str1[100]; // Declare a character array to hold the input string
    printf("Enter the string: "); // Prompt the user to enter a string
    fgets(str1, sizeof(str1), stdin); // Read a line of input from the user

    // Remove the newline character from the string if it was read
    str1[strcspn(str1, "\n")] = '\0';

    // Call the count function to get the length of the string
    int cnt = count(str1);
    // Print the length of the string
    printf("Length of the string: %d\n", cnt);
    return 0; // Return 0 to indicate successful completion of the program
}