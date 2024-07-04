#include <stdio.h>
#include <string.h>

void makeOutWord(char out[], char word[], char result[]) {
    int outLength = strlen(out);
    int wordLength = strlen(word);
    int middleIndex = outLength / 2;
    
    strncpy(result, out, middleIndex);
    result[middleIndex] = '\0';
    strcat(result, word);
    strcat(result, out + middleIndex);
}

int main() {
    char out[] = "<<>>";
    char word[] = "Yay";
    char result[10];
    
    makeOutWord(out, word, result);
    
    printf("%s\n", result);
    
    return 0;
}