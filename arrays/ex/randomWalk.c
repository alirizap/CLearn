// Random Walk across a 10x10 array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define LEFT 0
#define DOWN 1
#define RIGHT 2
#define UP 3

int main(void) {
    char board[10][10], *p;        
    const char alphabet[] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                             'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
                             'U', 'V', 'W', 'X', 'Y', 'Z'};
    bool full[10][10] = {[0][0] = true, false};
    int i, j, num, letters = 0, x = 0, y = 0;

    for (p = &board[0][0]; p <= &board[9][9]; p++)         // Initilize Board
        *p = '.';

    board[0][0] = 'A';   

    srand((unsigned) time(NULL));

    while (letters < 25) {
        num = rand() % 4;

        if (full[y][x - 1] && full[y + 1][x] && full[y][x + 1] && full[y - 1][x]) 
            break;

        switch (num) {
            case LEFT:
                if(x - 1 < 0 || full[y][x - 1])
                    break;
                x = x - 1;
                board[y][x] = alphabet[letters];
                full[y][x] = true;
                letters++;
                break;
            
            case DOWN:
                if(y + 1 > 9 || full[y + 1][x])
                    break;
                y = y + 1;
                board[y][x] = alphabet[letters];
                full[y][x] = true;
                letters++;
                break;

            case RIGHT:
                if (x + 1 > 9 || full[y][x + 1])
                    break;
                x = x + 1;
                board[y][x] = alphabet[letters];
                full[y][x] = true;
                letters++;
                break;

            case UP:
                if (y - 1 < 0 || full[y - 1][x]) 
                    break;
                y = y - 1;
                board[y][x] = alphabet[letters];
                full[y][x] = true;
                letters++;
                break;
            
            default:
                break;
        }
    }

    printf("\n");

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    return 0;
    
}