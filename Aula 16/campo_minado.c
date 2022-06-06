#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void inicializaVisual(char m[10][10]){
    int i, j;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            m[i][j] = '?';
        }
    }
}
void mostraMatriz(char m[10][10]){
    int i, j;
    printf("   0  1  2  3  4  5  6  7  8  9\n");
    for(i=0; i<10; i++){
            printf("%d ", i);
            for(j=0; j<10; j++){
                printf("[%c]", m[i][j]);
            }
            printf("\n");
        }
}

void inicializaJogo(char m[10][10]){
    int i,j, l, c; // index for loop
    for(i=0; i<10; i++){
        for(j=0;j<10;j++){
            m[i][j]= ' ';
        }
    }
    srand(time(NULL));
    for(i=0; i<10; i++){
        l=rand()%10;
        c=rand()%10;
        //garante que sempre existe 10 bombas
        if(m[l][c] =='*'){
            i--;
        }
        else{ //adiciona bomba
            m[l][c] = '*';
        }
    }
}

void contaBomba(char m[10][10]){
    int i, j, cont;
    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(m[i][j] == ' '){
                cont = 0;
                if(((i>0)&&(j>0))&&(m[i-1][j-1]=='*')){
                    cont++;
                }
                if((j>0)&&(m[i][j-1] == '*')){
                    cont++;
                }
                if(((i<9)&&(j>0))&&(m[i+1][j-1] == '*')){
                    cont++;
                }
                if((i>0)&&(m[i-1][j]=='*')){
                    cont++;
                }
                if((i<9)&&(m[i+1][j]=='*')){
                    cont++;
                }
                if(((i>0)&&(j<9))&&(m[i-1][j+1]=='*')){
                    cont++;
                }
                if((j<9)&&(m[i][j+1] == '*')){
                    cont++;
                }
                if(((i<9)&&(j<9))&&(m[i+1][j+1] == '*')){
                    cont++;
                }
                if(cont>0){
                    m[i][j] = cont+48;
                }
            }
        }
    }
}
int main(int argc, char *argv[]){
    char jogo[10][10], visual[10][10];
    int i, linha, coluna;
    inicializaVisual(visual);
    inicializaJogo(jogo);
    //mostraMatriz(jogo); //para o usuário não ver o gabarito
    contaBomba(jogo);
    //mostraMatriz(jogo);
    mostraMatriz(visual);
    for(i=0; i<10; i++){
        mostraMatriz(visual);
        printf("Digite a linha = ");
        scanf("%d", &linha);
        printf("Digite a coluna = ");
        scanf("%d", &coluna);

        //se for vazio
        if(visual[linha][coluna] == '?'){
            i--;
        }
        // troca o elemento da matriz visual pelo elemento do jogo
        visual[linha][coluna] = jogo[linha][coluna];
        if(visual[linha][coluna] == '*'){
            mostraMatriz(visual);
            printf("Você perdeu.");
        }
    }
    if(i==90){
        printf("Jogador vencedor");
    }
    return 0;
}
