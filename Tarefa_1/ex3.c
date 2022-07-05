#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef enum {false, true} bool;

bool search2D(char grid[10][10], int row, int col, char* word){
    printf(grid);
    int x[4] = { -1, 0, 0, 1 };
    int y[4] = { 0, 1, -1, 0 };
    if(grid[row][col] != word[0]){
        return false;
    }

    int len = strlen(word);
    int direcaoDePassos=0;
    for (direcaoDePassos = 0; direcaoDePassos < 4; direcaoDePassos++) {
        // Initialize starting point
        // for current direction
        int k;
        int rd = row + x[direcaoDePassos];
        int cd = col + y[direcaoDePassos];
            // First character is already checked,
            // match remaining characters
        for (k = 1; k < len; k++) {
            // Limites intrínsedcos à matriz
            if (rd >= 10 || rd < 0 || cd >= 10 || cd < 0) {
                break;
            }

            // Não encontrado
            if (grid[rd][cd] != word[k]) {
                break;
            }

                // Moving in particular direction
            rd += x[direcaoDePassos];
            cd += y[direcaoDePassos];
        }

        if (k == len) {
            return true;
        }
    }
    return false;
}


void patternSearch(char* word){
    int col=0, row=0;
    char matriz[10][10] = {
    {'Q', 'F', 'H','Q', 'P', 'L', 'P', 'W', 'S', 'Y'},
    {
        'A', 'B', 'N', 'W', 'A', 'Z', 'O', 'Q', 'A', 'T'
    },
    {
        'Z', 'O', 'U', 'E', 'S', 'O', 'T', 'A', 'G', 'R'
    },
    {
        'W', 'D', 'J', 'R', 'D', 'X', 'I', 'L', 'M', 'E'
    },
    {
        'S', 'E', 'M', 'T', 'F', 'C', 'U', 'K', 'N', 'W'
    },
    {
        'X', 'V', 'I', 'V', 'A', 'C', 'A', 'J', 'B', 'A'
    },
    {
        'E', 'T', 'K', 'Y', 'G', 'V', 'Y', 'H', 'V', 'T'
    },
    {
        'D', 'G', 'O', 'U', 'H', 'B', 'T', 'G', 'C', 'N'
    },
    {
        'C', 'B', 'L', 'I', 'J', 'N', 'R', 'F', 'X', 'A'
    },
    {
        'R', 'Y', 'P', 'O', 'K', 'M', 'E', 'D', 'Z', 'Q'
    }
    };
    printf(matriz);
    for(row = 0; row < 10; row++){
        for(col = 0; col < 10; col++){
            if (search2D(matriz, row, col, word)) {
                printf("Início %s, %s ", row, col);
            }
        }
    }
}

int main(int argc, char *argv[]){
    int i;
    char animal[4][5]={"GATO", "VACA", "BODE", "ANTA"};
    for(i=0;i<4;i++){
        patternSearch(animal[i]);
    }
        return 0;
    }
