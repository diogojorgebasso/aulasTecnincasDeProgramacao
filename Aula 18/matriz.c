#include<stdio.h>
#include<stdlib.h>

#define MATRIZ_SIZE 6

int menorElemento(int m[MATRIZ_SIZE][MATRIZ_SIZE]){
    int i,j, menor;
    menor = 1000000;
    for(i=0; i<MATRIZ_SIZE; i++){
        for(j=0; j<MATRIZ_SIZE; j++){
            if(j==(5-i)){
                if(m[i][j]<menor){
                    menor = m[i][j];
                }
            }
        }
     }
     return menor;
}

void imprimeMatriz(int m[MATRIZ_SIZE][MATRIZ_SIZE]){
    int i, j;
    for(i=0; i<MATRIZ_SIZE; i++){
        for(j=0; j<MATRIZ_SIZE; j++){
            printf("%*d", 4, m[i][j]);
        }
        printf("\n");
     }
}

int main(int argc, char *argv[]){
    int matriz[MATRIZ_SIZE][MATRIZ_SIZE], i, j;
    srand(time(NULL));
    for(i=0; i<MATRIZ_SIZE; i++){
        for(j=0; j<MATRIZ_SIZE; j++){
            matriz[i][j] = rand()%20;
        }
    }
    imprimeMatriz(matriz);
    printf("O menor elemento é %d", menorElemento(matriz));
    return 0;
}
