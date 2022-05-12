#include <stdio.h>

int main(int argc, char *argv[]){
    char n;
    printf("Digite um caractere: ");
    n=getchar();
    printf("Tecla pressionada: %c \n", n);
    getchar(); // o enter conta como um caractere; então, caso não houvesse este, o segundo n teria enter como entrada.
    printf("Digite um caractere: ");
    n=getchar();
    printf("Tecla pressionada: %c \n", n);
    return 0;
}
