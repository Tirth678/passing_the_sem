#include <stdio.h>
#include <stdlib.h>

// Function to merge two pre-sorted arrays
int* mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int* mergedSize) {
    // Calculate total size of merged array
    *mergedSize = size1 + size2;

    // Allocate memory for merged array
    int* mergedArr = (int*)malloc((*mergedSize) * sizeof(int));

    // Check memory allocation
    if (mergedArr == NULL) {
        printf("Memory allocation failed\n");
        *mergedSize = 0;
        return NULL;
    }

    // Merge sorted arrays
    int i = 0, j = 0, k = 0;

    // Compare and merge elements from both arrays
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from first array, if any
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }

    // Copy remaining elements from second array, if any
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }

    return mergedArr;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // First sorted array
    int arr1[] = {1, 3, 5, 7};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Second sorted array
    int arr2[] = {2, 4, 6, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Merged array size
    int mergedSize;

    // Merge sorted arrays
    int* mergedArr = mergeSortedArrays(arr1, size1, arr2, size2, &mergedSize);

    // Print merged array
    printf("Merged Sorted Array: ");
    printArray(mergedArr, mergedSize);

    return 0;
}