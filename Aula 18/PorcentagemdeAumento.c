#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    float precoAntigo, precoNovo;
    scanf("%f", &precoAntigo);
    scanf("%f", &precoNovo);
    printf("A porcentagem de aumento foi de %f", (precoNovo-precoAntigo)/precoAntigo);
    return 0;
}
