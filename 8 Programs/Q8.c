#include <stdio.h>

// Function to merge two sorted arrays
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
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
    int arr1[] = {5, 10, 15}; // Sorted array
    int arr2[] = {3, 8, 12, 20}; // Sorted array
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