#include <stdio.h>

// Function to find duplicate number and its positions
void findDuplicate(int arr[], int size) {
    int i, j;
    int found = 0;  // Flag to track if duplicate is found
    
    // Check each element with all subsequent elements
    for(i = 0; i < size - 1; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) {
                printf("Duplicate number found: %d\n", arr[i]);
                printf("Positions: %d and %d\n", i, j);
                found = 1;
                // We could break here if we only want the first duplicate
                // break;
            }
        }
    }
    
    if(!found) {
        printf("No duplicate number found in the array.\n");
    }
}

int main() {
    int size;
    
    // Get array size from user
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    
    int arr[size];
    
    // Get array elements from user
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Print the original array
    printf("\nOriginal array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Find and print duplicate
    findDuplicate(arr, size);
    
    return 0;
}