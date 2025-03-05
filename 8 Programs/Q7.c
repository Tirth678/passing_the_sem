#include <stdio.h>
#include <stdlib.h>

// Function to merge two unsorted arrays
int* mergeArrays(int arr1[], int size1, int arr2[], int size2, int* mergedSize) {
    *mergedSize = size1 + size2;
    int* mergedArr = (int*)malloc(*mergedSize * sizeof(int));

    if (mergedArr == NULL) {
        printf("Memory allocation failed\n");
        *mergedSize = 0;
        return NULL;
    }

    // Copy elements from both arrays
    for (int i = 0; i < size1; i++) {
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < size2; i++) {
        mergedArr[size1 + i] = arr2[i];
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
    int arr1[] = {10, 5, 15};
    int arr2[] = {20, 3, 8, 12};
    int mergedSize;

    int* mergedArr = mergeArrays(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]), &mergedSize);

    if (mergedArr != NULL) {
        printf("First Array: ");
        printArray(arr1, sizeof(arr1) / sizeof(arr1[0]));
        printf("Second Array: ");
        printArray(arr2, sizeof(arr2) / sizeof(arr2[0]));
        printf("Merged Array: ");
        printArray(mergedArr, mergedSize);
        free(mergedArr);
    }

    return 0;
}