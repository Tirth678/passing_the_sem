#include <stdio.h>
#include <string.h>

// Function to delete substring from the main string
void deleteSubstring(char *str, int start, int length) {
    if (str == NULL || start < 0) return; // Validate input parameters

    int totalLength = strlen(str);
    if (start >= totalLength) return; // Check if start index is within bounds

    if (start + length > totalLength) length = totalLength - start; // Adjust length if necessary

    memmove(str + start, str + start + length, totalLength - start - length + 1); // Remove substring
}

int main() {
    char str[] = "Hello, World! How are you?";
    printf("Original string: %s\n", str);
    deleteSubstring(str, 6, 7); // Delete substring "World! "
    printf("String after deletion: %s\n", str);
    return 0;
}