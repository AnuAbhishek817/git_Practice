#include<stdio.h>
#include<stdlib.h>

int main() {
    // Declare a pointer to an integer
    int *ptr;

    // Allocate memory for an integer
    ptr = (int *)malloc(sizeof(int));

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Assign a value to the allocated memory
    *ptr = 42;

    // Print the value stored in the allocated memory
    printf("Value: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    return 0; // Exit the program successfully
}   