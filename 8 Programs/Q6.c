#include <stdio.h>
#include <limits.h>

// Function to find the second largest number in an array
int findSecondLargest(int arr[], int size) {

    // Initialize largest and second largest
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // First pass: Find the largest number
    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Second pass: Find the second largest number
    for (int i = 0; i < size; i++) {
        // If current number is less than largest and greater than secondLargest
        if (arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    // Check if a second largest number was found
    if (secondLargest == INT_MIN) {
        printf("No second largest number found.\n");
        return INT_MIN;
    }

    return secondLargest;
}

int main() {
    // Example arrays
    int arr1[] = {10, 5, 20, 15, 25};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Find and print second largest for first array
    printf("Array 1: ");
    for (int i = 0; i < size1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nSecond Largest: %d\n", findSecondLargest(arr1, size1));



    return 0;
}