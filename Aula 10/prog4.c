#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int a;
    scanf("%d", &a);
    printf("Quadrado = %lf \n", pow(a,2.0));
    printf("Cubo = %lf \n", pow(a,3.0));
    printf("Raiz Quadrada = %lf \n", pow(a,1/2.0));
    printf("Raiz Cúbica = %lf \n", pow(a,1/3.0));
    return 0;
}
