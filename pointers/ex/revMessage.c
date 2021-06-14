// Reverse message from user

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c;
    int len = 0;
    char message[100];
    char *p;

    printf("Enter a message: ");
    c = getchar();
    while(c != '\n') {
        message[len] = c;
        len++;
        c = getchar();
    }

    for(p = &message[len-1]; p >= &message[0]; p--)
        printf("%c", *p);
    
    return 0;
}