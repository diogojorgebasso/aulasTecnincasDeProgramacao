#include<stdio.h>

long int fibRecursivo(int num){
    if(num<2){
        return 1;
    }
    return fibRecursivo(num-1)+fibRecursivo(num-2);
}

int main(int argc, char *argv[]){
    int num;
    long int fatorial;

    printf("Numero = ");
    scanf("%d", &num);
    fatorial=fibRecursivo(num);
    printf("Fatorial de %d = %d\n", num, fatorial);
    return 0;
}
