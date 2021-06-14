// Checks digits and print Occurrences of numbers

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int occur[10] = {0};
    int digit;
    long n;
    int i;

    printf("Enter a number: \n");
    scanf("%ld", &n);
    if (n < 0) {
        printf("Invalid Number\n");
        exit(1);
    }
    while (n > 0) {
        digit = n % 10;
        occur[digit] = occur[digit] + 1;
        n /= 10;
    }
    printf("Digit:       ");
    for (i = 0; i < 10; i++) 
        printf(" %d\t", i);
    printf("\n");
    printf("Occurrences: ");
    for (i = 0; i < 10; i++) 
        printf(" %d\t", occur[i]);

    return 0;
}
