#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w"); // Open for writing

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fprintf(file, "Hello, File Handling!\n");
    fprintf(file, "This is a simple example.\n");

    fclose(file); // Close the file

    return 0;
}
