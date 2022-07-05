#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
    char palavraEntrada[50], plural[50];
    int ultimoCaractetre;
    printf("Digite a palavra: ");
    scanf("%s", palavraEntrada);
    ultimoCaractetre = strlen(palavraEntrada)-1;
    switch(palavraEntrada[ultimoCaractetre]){
    case 'r':
        strcpy(plural, palavraEntrada);
        strcat(plural, "es");
        break;
    case 'n':
        strcpy(plural, palavraEntrada);
        strcat(plural, "es");
        break;
    case 's':
        strcpy(plural, palavraEntrada);
        strcat(plural, "es");
        break;
    case 'z':
        strcpy(plural, palavraEntrada);
        strcat(plural, "es");
        break;
    case 'l':
        strncpy(plural, palavraEntrada, ultimoCaractetre);
        plural[ultimoCaractetre] = '\0';
        strcat(plural, "is");
        break;
    case 'x':
        strncpy(plural, palavraEntrada, ultimoCaractetre);
        plural[ultimoCaractetre] = '\0';
        strcat(plural, "ces");
        break;
    default:
        if(palavraEntrada[ultimoCaractetre-1]=='a'&&palavraEntrada[ultimoCaractetre]=='o'){
            strcpy(plural, palavraEntrada);
            plural[ultimoCaractetre] = '\0';
            plural[ultimoCaractetre-1] = '\0';
            strcat(plural, "oes");
        }
        else{
            strcpy(plural, palavraEntrada);
            strcat(plural, "s");
        }
        break;
    }
    printf("Substantivo pluralizado= %s", plural);
    return 0;
}
