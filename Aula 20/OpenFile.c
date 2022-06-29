#include<stdio.h>

int main(int argc, char*argv[]){
    FILE *arq;

    if((arq=fopen("alunos.txt", "r"))==NULL){
        printf("Arquivo não pode ser aberto\n");
    }
    else{
        printf("arquivo aberto");
    }
    fclose(arq);
    return 0;
}
