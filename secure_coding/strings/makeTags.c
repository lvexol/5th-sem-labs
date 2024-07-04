#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* makeTags(const char* tag, const char* word) {
    // Calculate the length of the resulting string
    size_t tagLen = strlen(tag);
    size_t wordLen = strlen(word);
    size_t resultLen = 2 + tagLen + wordLen + 3; // 2 for opening tag, 3 for closing tag and null terminator

    // Allocate memory for the resulting string
    char* result = (char*)malloc(resultLen * sizeof(char));
    if (result == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(1);
    }

    // Construct the resulting string
    snprintf(result, resultLen, "<%s>%s</%s>", tag, word, tag);

    return result;
}

int main() {
    const char* tag = "i";
    const char* word = "Yay";
    char* htmlString = makeTags(tag, word);
    printf("%s\n", htmlString);
    free(htmlString);

    return 0;
}