// this program is a b1ff filter 

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char sen[100];
    char c;
    int i = 0;

    printf("Enter Message: ");
    fgets(sen, sizeof(sen), stdin);

    printf("%s\n", sen);

    for (i=0; i < 100; i++) {
        if (sen[i] == '\0')
            break;

        switch (sen[i]) {
            case 'A':
            case 'a':
                printf("4");
                break;

            case 'B':
            case 'b':
                printf("8");
                break;

            case 'E':
            case 'e':
                printf("3");
                break;

            case 'I':
            case 'i':
                printf("1");
                break;

            case 'O':
            case 'o':
                printf("0");
                break;

            case 'S':
            case 's':
                printf("5");
                break;

            default:
                printf("%c", toupper(sen[i]));
                break;
            
        }
    }

    return 0;
}
