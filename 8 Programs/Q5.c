#include <stdio.h>
#include <string.h>

// Function to insert substring at a specified position
void insertSubstring(char *mainStr, const char *subStr, int position) {
    if (position < 0) return; // Validate position

    int mainStrLen = strlen(mainStr);
    int subStrLen = strlen(subStr);

    if (position > mainStrLen) position = mainStrLen; // Adjust position

    // Shift existing characters to make space for substring
    memmove(mainStr + position + subStrLen, mainStr + position, mainStrLen - position + 1);
    strncpy(mainStr + position, subStr, subStrLen); // Copy substring
}

int main() {
    char mainStr[100] = "Hello world!";
    char subStr[] = "beautiful ";

    printf("Original string: %s\n", mainStr);
    insertSubstring(mainStr, subStr, 6);
    printf("String after insertion: %s\n", mainStr);

    return 0;
}