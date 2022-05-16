#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int a,b,c,d,e;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    printf("Distancia ponto a reta = %lf \n", (a*d+b*e+c)/(pow(pow(a,2.0)+pow(b,2.0), 1/2.0)));
    return 0;
}
