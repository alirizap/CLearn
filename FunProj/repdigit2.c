// Checks numbers for repeated digits and print those numbers

#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool print_it[10] = {false};
    int digit;
    long n;

    printf("Enter a number: \n");
    scanf("%ld", &n);
    printf("Repeated digit(s): ");
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
            printf("%d ", digit);
            print_it[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    return 0;
}
