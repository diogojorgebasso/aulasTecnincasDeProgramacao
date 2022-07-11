#include<stdio.h>

typedef struct {
    char endereco[30];
    char cidade[20];
    int temporada;
    float preco;
    char Siglaestado[2];
}t_item;

int main(int argc, char *argv[]){
    int i;
    t_item a[55];
    for(i=0; i<55; i++){
        printf("numero=%d \n", i);
        printf("Digite o nome: ");
        scanf("%s", a[i].nome);
        printf("Digite end: ");
        scanf("%s", a[i].end);
        printf("Digite fone: ");
        scanf("%s", a[i].fone);
        printf("Digite nasc(dd-mm-aaaa): ");
        scanf("%d-%d-%d", &a[i].nasc.dia, &a[i].nasc.mes, &a[i].nasc.ano);
    }
    return 0;
}
