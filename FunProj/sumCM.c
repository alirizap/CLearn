// This program reads 5x5 array of integers and then prints the row sums and 
// the column sums


#include <stdio.h>

#define ROW 5
#define COLUMN 5

int main(void) {
    int i, j;
    int m[ROW][COLUMN] = {0};
    int sum = 0;

    for (i = 0; i < ROW; i++) {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < COLUMN; j++)
            scanf("%d", &m[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("Row Totals:");
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COLUMN; j++)
            sum += m[i][j];
        printf(" %d", sum);
        sum = 0;
    }
    printf("\n");
    printf("Column Totals:");
    for (i = 0; i < COLUMN; i++) {
        for (j = 0; j < ROW; j++)
            sum += m[j][i];
        printf(" %d", sum);
        sum = 0;
    }

    return 0;
}