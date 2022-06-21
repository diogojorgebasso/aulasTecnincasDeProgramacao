#include<stdio.h>
#include<stdlib.h>
int main(){
    char nome[30], msg[100];
    printf("Digite seu nome: ");
    scanf("%[^\n]", &nome);
    sprintf(msg, "%s, seja bem vindo a UNIFEI!", nome);
    printf("%s \n", msg);
    return 0;
}
