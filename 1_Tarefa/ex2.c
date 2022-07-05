 #include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char frase[50], criptografia[50];
    int i;
    scanf("%[^\n]", frase);
    int ASCIIValueofFrase;
    for (i=0; i<strlen(frase); i++){
        ASCIIValueofFrase = frase[i];
        switch (frase[i]){
        case 'x':
            criptografia[i]=97;
        case 'y':
            criptografia[i]=98;
        case 'z':
            criptografia[i]=99;
        default:
            if (ASCIIValueofFrase==32){ //manter o espaço; caso contrário, será trocado por '#'.
                criptografia[i]=32;
            }
            else{
                criptografia[i]=ASCIIValueofFrase+3;
            }
        }
    }
    criptografia[i+1] = '\0';
    printf("Resultado da criptografia: %s", criptografia);
    return 0;
}
