#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("Geométrica = %lf \n", pow(a*b*c, 1.0/3.0));
    printf("Ponderada = %lf \n", (a+2*b+3*c)/6.0);
    printf("Aritmética = %lf \n", (a+b+c)/3.0);
    printf("Harmônica = %lf \n", (3.0*a*b*c)/(a*b+b*c+a*c));
    return 0;
}
