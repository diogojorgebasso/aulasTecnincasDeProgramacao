// Programa "leitura de raio e exposição de formulas"
#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int r;
    scanf("%d", &r);
    printf("Comprimento = %f \n", 2*M_PI*r);
    printf("Área = %f \n", M_PI*pow(r,2));
    printf("Volume = %f \n", 0,75*M_PI*pow(r,3));
    return 0;
}

