#include <stdio.h>
#include <stdlib.h>

// Malloc Sample Program

int main() 
{

    int n, i;

    n = 5;
    printf("Enter number of elements: %d\n", n);

    int *ptr = malloc(n * sizeof(int));

    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    } else {
        printf("Memeory successfully allocated using molloc.\n");

        for (i = 0; i < n; i++) {
            ptr[i] = i + 1;
        } 

        printf("The elements of the array are: \n");

        free(ptr);
        for(i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }

        return 0;
    }
}