#include <stdio.h>
#include <stdbool.h>

#define M 10

 void imprime(char m[M][M]){
    int i, j;
    printf("\n");
    printf("======================");
    printf("\n");
    for(i=0; i<M; i++){
        printf("\n");
        for(j=0; j<M; j++){
            printf("%c ", m[i][j]);
        }
    }
    printf("\n\nAperte qualquer tecla para continuar...");
    getchar();
 }

int fimX, fimY;
void labirinto(char m[M][M], int lin, int col, bool *fim){
    int i, j;
    m[lin][col]='o';
    imprime(m);
    if((lin+1<M)&&(m[lin+1][col]=='x'))
        labirinto(m, lin+1, col, fim);
    if((lin-1>=0)&&(m[lin-1][col]=='x'))
        labirinto(m, lin-1, col, fim);
    if((col+1<M)&&(m[lin][col+1]=='x'))
        labirinto(m, lin, col+1, fim);
    if((col-1>=0)&&(m[lin][col-1]=='x'))
        labirinto(m, lin, col-1, fim);
    if(col==(M-1)){
        *fim=true;
        printf("Encontramos o caminho abaixo!\n");
        fimX = lin;
        fimY = col;
    }
    if(*fim==true){
        m[lin][col]='*';
        imprime(m);
    }
 }

int main(int argc, char* argv[]){
    int linha=7, coluna=7;
    char mat[10][10]={
         {' ', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', ' '},
         {' ', ' ', 'x', ' ', ' ', ' ', 'x', ' ', ' ', ' '},
         {' ', ' ', 'x', ' ', 'x', 'x', 'x', ' ', ' ', ' '},
         {' ', ' ', 'x', 'x', ' ', ' ', ' ', ' ', ' ', ' '},
         {' ', ' ', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
         {' ', ' ', ' ', 'x', ' ', 'x', ' ', ' ', ' ', ' '},
         {'x', 'x', 'x', 'x', ' ', 'x', ' ', ' ', ' ', ' '},
         {' ', ' ', ' ', ' ', ' ', 'x', 'x', ' ', ' ', ' '},
         {' ', ' ', ' ', 'x', ' ', 'x', ' ', ' ', ' ', ' '},
         {' ', ' ', ' ', 'x', ' ', 'x', ' ', ' ', ' ', ' '}
     };
    bool f=false;
    while(linha>6 && coluna>6){
        printf("Digite a entrada do labirinto [linha coluna]:");
        scanf("%d %d", &linha, &coluna);
    }
    labirinto(mat, linha, coluna, &f);
    printf("Encontramos o seguinte caminho abaixo!\n");
    printf("Inicio: [%d, %d]\n", linha, coluna);
    printf("Fim: [%d,%d]", fimX, fimY);
    return 0;
}
