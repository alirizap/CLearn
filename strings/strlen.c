// String length 

#include <stdio.h>

size_t strlen(const char *s) {
    size_t n = 0;

    while (*s++)
        n++;
    return n;
}