#include <stdio.h>
#include <string.h>

// Function to extract substring from a given string
void extractSubstring(const char *source, char *destination, int start, int length) {
    if (start < 0 || length < 0 || start >= strlen(source)) {
        destination[0] = '\0';  // Set to empty string for invalid input
        return;
    }
    strncpy(destination, source + start, length);
    destination[length] = '\0';  // Null-terminate the substring
}

int main() {
    char str[] = "Hello, World!";
    char substring[20];
    
    extractSubstring(str, substring, 7, 5);
    printf("Original string: %s\nSubstring: %s\n", str, substring);

    return 0;
}