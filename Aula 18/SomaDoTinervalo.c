#include<stdio.h>
#include<stdlib.h>

int somaDoIntervalo(int a, int b){
    int i, soma=0;
    for(i=a; i<=b; i++){
        soma+=i;
    }
    return soma;
}
int main(int argc, char *argv[]){
    int limiteInferior, limiteSuperior, soma;
    printf("Digite o menor número: ");
    scanf("%d", &limiteInferior);
    printf("Digite o maior número: ");
    scanf("%d", &limiteSuperior);
    soma=somaDoIntervalo(limiteInferior, limiteSuperior );
    printf("%d", soma);
    return 0;
}
