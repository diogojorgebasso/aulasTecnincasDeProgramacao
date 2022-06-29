#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef enum{false,true}bool;
typedef struct{
    char apelido[10];
    char nome[50];
    char end[50];
    int tel;
}agenda;

FILE *arq;

char menu(); //menu
void incluir(); //inclui um item no arquivo
void exibir(); //mostra os itens do arquivo
void alterar(); //altera os itens do arquivo


int main(int argc, char *argv[]){
    char op=' ';
    arq=fopen("agenda.txt","r+");

    if (arq==NULL){
        arq=fopen("agenda.txt","w+");
    }
    while(op!='f'){
        op=menu();
        switch(op){
            case 'i':
                incluir();
                break;
            case 'e':
                exibir();
                break;
            case 'a':
                alterar();
                break;
            case 'f':
                break;
            default:
                printf("Opcao invalida!\n");
        }
    }
    fclose(arq); //fecha o arquivo
    return 0;
 }

char menu(){
    char op;
    printf("\n");
    printf("(i)=> Inserir \n");
    printf("(e)=> Exibir \n");
    printf("(a)=> Alterar \n");
    printf("(f)=> Fim \n");
    printf("Opcao: ");
    op=getchar();
    getchar();
    return op;
 }

 void incluir(){
    agenda item;
    printf("Apelido: ");
    gets(item.apelido);
    printf("Nome: ");
    gets(item.nome);
    printf("Endereco: ");
    gets(item.end);
    printf("Telefone: ");
    scanf("%d", &item.tel);
    getchar();

    //posiciona o ponteiro no final do arquivo
    fseek(arq, 0, SEEK_END);

    //escreve os dados da estrutura no arquivo
    fwrite(&item, sizeof(agenda), 1, arq);
 }

 void exibir(){
    agenda item;

    //posiciona o ponteiro no inicio do arquivo
    fseek(arq, 0, SEEK_SET);

    //imprime os dados do arquivo
    while(fread(&item,sizeof(agenda),1,arq)==true){
    printf("%s %s %s %d\n", item.apelido, item.nome,
    item.end, item.tel);
    }
 }

void alterar(){
    agenda item;
    bool achou=false;
    char apel[10];
    int pos=0;
    printf("Apelido: ");
    scanf("%s", &apel);
    getchar();

     //posiciona no inicio do arquivo
     fseek(arq, 0, SEEK_SET);

     while(fread(&item,sizeof(agenda),1,arq)==true){
         if(strcmp(item.apelido,apel)==0){
            achou=true;
            break;
         }
         pos=ftell(arq);
    }
     if(achou){
         printf("Registro Encontrado \n");
         printf("Novo Apelido: ");
         gets(item.apelido);
         printf("Nome: [%s] Novo Nome: ", item.nome);
         gets(item.nome);
         printf("Endereco: [%s] Novo Endereco: ", item.end);
         gets(item.end);
         printf("Telefone: [%d] Novo Telefone: ", item.tel);
         scanf("%d", &item.tel);
         getchar();
         fseek(arq, pos, SEEK_SET);
         fwrite(&item,sizeof(agenda),1,arq);
     }
     else {
     printf("\n\n Registro nao encontrado...");
     }
 }

