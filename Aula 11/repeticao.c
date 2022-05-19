#include <stdio.h>
int main(int argc, char *argv[]){
    int total=0, i, num;
    for(i=0; i<5; i++){
        printf("Digite um número = ");
        scanf("%d", &num);
        total+=(num*3);
    }
    printf("Somatório = %d", total);
    return 0;
}
