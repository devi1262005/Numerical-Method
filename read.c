#include <stdio.h>

int main() {
    FILE *file = fopen("input.txt", "r"); // Open for reading

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    char buffer[100]; // Buffer to store each line

    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file); // Close the file

    return 0;
}
