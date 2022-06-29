#include<stdio.h>

 int main(int argc, char* argv[]){
    char nome[50];
    FILE *arquivoAberto;

    arquivoAberto = fopen("alunos.txt", "r");

    while(!feof(arquivoAberto)){
        fscanf(arquivoAberto, "%s", nome);
        printf("%s\n", nome);
    }

    fclose(arquivoAberto);
    return 0;
 }


