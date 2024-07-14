#include <stdio.h>

int main() {
    FILE *file = fopen("append.txt", "a"); // Open for appending

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    fprintf(file, "This line will be appended.\n");

    fclose(file);

    return 0;
}
