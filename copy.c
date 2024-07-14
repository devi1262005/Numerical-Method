#include <stdio.h>

int main() {
    FILE *sourceFile = fopen("source.txt", "r");
    FILE *destinationFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Could not open the files.\n");
        return 1;
    }

    char ch;

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
