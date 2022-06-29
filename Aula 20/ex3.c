#include<stdio.h>

 int main(int argc, char* argv[]){
    char nome[50];
    FILE *arquivoAberto;

    if((arquivoAberto=fopen("alunos.txt", "w"))==NULL){
        printf("Arquivo a ser criado...");
        return 1;
    }

    int index=0;
    while(strcmp(nome, "S")!=0){
        if(index==0){
            printf("Digite o nome: ");
        }
        else{
            printf("Digite o nome ou S para sair: ");
        }
        index++;
        scanf("%s", &nome);
        if(strcmp(nome,"S")==0){
            break;
        }
        fputs(nome, arquivoAberto);
        fputc('\n', arquivoAberto);
    }

    fclose(arquivoAberto);
    return 0;
 }



