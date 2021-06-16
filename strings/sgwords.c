// Find Smallest and largest words

#include <stdio.h>
#include <string.h>

int main(void) {
    char smallest_word[20];
    char largest_word[20];
    char word[20];

    int i, j;

    for (;;) {
        printf("Enter Word: ");
        scanf("%s", word);

        if (strlen(word) == 4)
            break;

        if (strcmp(word, largest_word) > 0)
            strcpy(largest_word, word);

        else 
            strcpy(smallest_word, word);

    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);

    return 0;
}