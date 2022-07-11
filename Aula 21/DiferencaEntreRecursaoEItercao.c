#include<stdio.h>

long int fatInterativo(int num);
long int fatRecursivo(int num);


int main(int argc, char *argv[]){
    int num;
    long int fatorial =0;

    printf("Numero = ");
    scanf("%d", &num);
    fatorial=fatInterativo(num);
    printf("Fatorial de %d = %d\n", num, fatorial);
    fatorial=fatRecursivo(num);
    printf("Fatorial de %d=%d\n", num, fatorial);
    return 0;
}

long int fatInterativo(int num){
    int i;
    long int resultado=1;

    if(num<2){
        return resultado;
    }
    else{
        for(i=2; i<num+1; i++){
            resultado*=i;
        }
        return resultado;
    }

}

long int fatRecursivo(int num){
    if(num<1){
        return 1;
    }
    return num*fatRecursivo(num-1);
}
