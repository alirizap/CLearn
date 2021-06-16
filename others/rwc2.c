// Simple way to read from file
#include <stdio.h>

int main()
{
    FILE *fptr;
    char c;
    fptr = fopen("temp.txt", "r");
    if (fptr) {
        while ((c = getc(fptr)) != EOF)
            putchar(c);
        fclose(fptr);
    }
}
