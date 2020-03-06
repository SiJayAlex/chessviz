#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char P[9][9];
    int i, j;
    for (i = 0; i <= 8; i++) {
        P[i][0] = 56 - i;
        P[8][i + 1] = 97 + i;
    }
    P[8][0] = ' ';
    for (i = 2; i < 6; i++) {
        for (j = 1; j < 9; j++) {
            P[i][j] = ' ';
        }
    }
    for (i = 1; i < 9; i++) {
        P[1][i] = 'p';
        P[6][i] = 'P';
    }
    P[0][1] = P[0][8] = 'r';
    P[7][1] = P[7][8] = 'R';
    P[0][2] = P[0][7] = 'n';
    P[7][2] = P[7][7] = 'N';
    P[0][3] = P[0][6] = 'b';
    P[7][3] = P[7][6] = 'B';
    P[0][4] = 'q';
    P[7][4] = 'Q';
    P[0][5] = 'k';
    P[7][5] = 'K';
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf(" %c", P[i][j]);
        }
        printf("\n");
    }
    return 0;
}
