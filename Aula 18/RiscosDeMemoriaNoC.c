#include<stdio.h>
int main(int argc, char *argv[]){
    char str[256];
    printf("Digite o endereço completo: ");
    fgets(str);
    printf("Endereço = %s \n", str);
    return 0;
}
