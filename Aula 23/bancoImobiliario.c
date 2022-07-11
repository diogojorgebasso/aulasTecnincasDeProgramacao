#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

#define JOGOS 10

typedef enum{
    NENHUM,
    EMPRESA,
    SORTEREVES,
    PRISAO,
    TERRENO}
enumcasa;

typedef enum{
    NINGUEM,
    JOGADOR1,
    JOGADOR2}
enumpeca;

typedef struct{
    enumcasa tipocasa;
    enumpeca dono;
    int valor;
} tcasa;

void inicializa(tcasa vetor[30]){
    int i=0;
    for(i=0; i<30; i++){
        vetor[i].tipocasa = NENHUM;
        vetor[i].valor=0;
        vetor[i].dono=NINGUEM;
    }
}

void geraTabuleiro(tcasa vetor[30]){
    int i,x,y,z;

    for(i=0; i<10;i++){
        x = rand()%30;
        y=11+rand()%10;
        if(vetor[i].tipocasa==NENHUM){
            vetor[i].tipocasa=EMPRESA;
            vetor[i].valor=y;
        }

    }
    z=rand()%30;
    if(vetor[i].tipocasa==NENHUM){
        vetor[i].tipocasa=SORTEREVES;
        vetor[i].valor=0;
    }
    for(i=0; i<2;i++){
        x = rand()%30;
        if(vetor[i].tipocasa==NENHUM){
            vetor[i].tipocasa=PRISAO;
            vetor[i].valor=y;
        }
    }
    for(i=0; i<30;i++){
        y=1+rand()%10;
        if(vetor[i].tipocasa==NENHUM){
            vetor[i].tipocasa=TERRENO;
            vetor[i].valor=y;
        }
    }
}

void printaSiglaTipoCasa(tcasa vetor[30]){
    int i;
    for(i=0; i<15; i++){
        enumcasa tipoCasa=vetor[i].tipocasa;
        if(tipoCasa==TERRENO){
            printf(" TE");
        }
        if(tipoCasa==SORTEREVES){
            printf(" SO");
        }
        if(tipoCasa==PRISAO){
            printf(" PR");
        }
        if(tipoCasa==EMPRESA){
            printf(" EM");
        }
    }
}

void printaValorTipoCasa(tcasa vetor[30]){
    int i, valor;
    for(i=0; i<15; i++){
        enumcasa tipoCasa=vetor[i].tipocasa;
        valor = vetor[i].valor;
        if(tipoCasa==TERRENO){
            printf(" %2d", valor);
        }
        if(tipoCasa==SORTEREVES){
            printf(" RE");
        }
        if(tipoCasa==PRISAO){
            printf(" IS");
        }
        if(tipoCasa==EMPRESA){
            printf(" %2d", valor);
        }
    }
}

void printaSiglaTipoCasa29(tcasa vetor[30]){
    int i;
    for(i=29;i>14; i--){
        enumcasa tipoCasa=vetor[i].tipocasa;
        if(tipoCasa==TERRENO){
            printf(" TE");
        }
        if(tipoCasa==SORTEREVES){
            printf(" SO");
        }
        if(tipoCasa==PRISAO){
            printf(" PR");
        }
        if(tipoCasa==EMPRESA){
            printf(" EM");
        }
    }

}

void printaValorTipoCasa29(tcasa vetor[30]){
    int i,valor;
    for(i=29;i>14; i--){
        enumcasa tipoCasa=vetor[i].tipocasa;
        valor = vetor[i].valor;
        if(tipoCasa==TERRENO){
            printf(" %2d", valor);
        }
        if(tipoCasa==SORTEREVES){
            printf(" RE");
        }
        if(tipoCasa==PRISAO){
            printf(" IS");
        }
        if(tipoCasa==EMPRESA){
            printf(" %2d", valor);
        }
    }
}

void printaPosicaoJogador29(int posicao1, int posicao2){
    int i;
    for(i=29;i>14; i--){
        if(posicao1==i && posicao2==i){
            printf(" *P12");
        }
        if(posicao1==i){
            printf(" [P1]");
        }
        if(posicao2==i){
            printf(" [P2]");
        }
        if(posicao2!=i && posicao1!=i){
            printf(" []");
        }
    }
}

void mostra(tcasa vetor[30], int posicao1, int posicao2){
    printf(" 0  1  2  3  4  5  6  7  8  9  10 11 12 13 14\n");
    printaSiglaTipoCasa(vetor);
    printf("\n");
    printaValorTipoCasa(vetor);
    printf("\n");
    printaPosicaoJogador(posicao1, posicao2);
    printf("\n");
    printaPosicaoJogador29(posicao1, posicao2);
    printf("\n");
    printaSiglaTipoCasa29(vetor);
    printf("\n");
    printaValorTipoCasa29(vetor);
    printf("\n");
    printf(" 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15\n");
    printf("\n");
}



void printaPosicaoJogador(int posicao1, int posicao2){
    int i;
    for(i=0; i<15; i++){
        if(posicao1==i && posicao2==i){
            printf(" *P12");
        }
        else{
            if(posicao1==i){
                printf(" [P1]");
            }
            if(posicao2==i){
                printf(" [P2]");
            }
            if(posicao2!=i && posicao1!=i){
                printf(" []");
            }
        }
    }
}

int main(int argc, char *argv[]){
    int dado, i;
    tcasa tabuleiroCompleto[30];
    int jogador1=0, jogador2=0;

    srand(time(NULL));

    inicializa(tabuleiroCompleto);
    geraTabuleiro(tabuleiroCompleto);
    for(i=0; i<JOGOS; i++){
        dado = 1+rand()%3;
        jogador1+=dado;
        dado = 1+rand()%3;
        jogador2+=dado;
        if(jogador1>29){
            jogador1-=29;
        }
        if(jogador2>29){
            jogador2-=29;
        }
        mostra(tabuleiroCompleto, jogador1, jogador2);
    }

    return 0;
}
