#include <math.h>
#include <stdio.h>
int main(int argc, char *argv[]){
    int a, r;
    scanf("%d", &a);
    scanf("%d", &r);
    printf("Volume = %f \n", M_PI*pow(r,2)*a);
    return 0;
}
