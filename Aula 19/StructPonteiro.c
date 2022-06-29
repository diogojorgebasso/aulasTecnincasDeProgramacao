#include<stdio.h>

typedef struct {
    char titulo[30];
    char producao[20];
    int temporada;
    float preco;
    char dataCompra[8];
}seriesTv;

int main(int argc, char *argv[]){
    seriesTv *serieUm;
    serieUm = (seriesTv*) malloc(sizeof(seriesTv));
    strcpy(serieUm->titulo, "Big Bang Theory");
    serieUm->temporada=3;
    printf("%s está na temporada %d \n", serieUm->titulo, serieUm->temporada);
    free(serieUm);
    printf(&serieUm); //lixo de memória
    return 0;
}
