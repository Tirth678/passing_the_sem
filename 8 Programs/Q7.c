#include <stdio.h>

// Function to merge two unsorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    // Copy elements from both arrays
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 5, 15};
    int arr2[] = {20, 3, 8, 12};
    int mergedSize = sizeof(arr1) / sizeof(arr1[0]) + sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[mergedSize]; // Allocate memory on the stack

    mergeArrays(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]), mergedArr);

    printf("First Array: ");
    printArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printf("Second Array: ");
    printArray(arr2, sizeof(arr2) / sizeof(arr2[0]));
    printf("Merged Array: ");
    printArray(mergedArr, mergedSize);

    return 0;
}