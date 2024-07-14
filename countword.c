#include <stdio.h>
#include <ctype.h> // For character type functions

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);

    int consonants = 0, vowels = 0, spaces = 0;
    
    for (int i = 0; word[i] != '\0'; i++) {
        char ch = tolower(word[i]); // Convert to lowercase for case-insensitivity

        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vowels++;
                break;
            case ' ':
                spaces++;
                break;
            default:
                if (isalpha(ch)) // Check if the character is an alphabet
                    consonants++;
        }
    }

    printf("Consonants: %d\n", consonants);
    printf("Vowels: %d\n", vowels);
    printf("Spaces: %d\n", spaces);

    return 0;
}
