#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int entrada;
    scanf("%d", &entrada);
    if (entrada<=9){
        int i=0;
        int a=0;
        for(i=1; i<entrada+1; i++){
            printf("%d ", i);
            for(a=1; a<i; a++){
                printf("%d ", i*(a+1));
            }
        printf("\n");
        }
    }
    else{
        printf("Digite um valor entre um e nove!");
    }
    return 0;
}
