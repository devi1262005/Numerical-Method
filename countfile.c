#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    int charCount = 0, wordCount = 0, lineCount = 0;
    char ch;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        charCount++;

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }

        if (ch == '\n') {
            lineCount++;
        }
    }

    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount);

    fclose(file);

    return 0;
}
