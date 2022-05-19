#include <stdio.h>

int main(int argc, char *argv[]){
    float nota;
    printf("Digite a sua nota: ");
    scanf("%f", &nota);
    if(nota>=7){
        printf("Aprovado direto");
    }
    else{
        if(nota>=5){
            printf("Aprovado!");
        }
        else{
            printf("Reprovado");
        }
    }
    return 0;
}
