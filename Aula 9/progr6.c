#include <stdio.h>

int main(int argc, char *argv[]){
    int n;
    printf("Núnero = ");
    scanf("%d", &n);
    printf("valor de n=%d, no endereco %u \n", n, &n);
    return 0;
}
