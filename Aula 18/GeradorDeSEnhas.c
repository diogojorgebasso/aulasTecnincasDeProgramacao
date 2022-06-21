#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
typedef enum{false,true} boolean;

int threshold(int numberForChecking){
    if(numberForChecking>=100){
        return numberForChecking=99;
    }
    else{
        return numberForChecking;
    }
}

boolean isValidyEntry(int entry){
    if(entry==3){
        return true;
    }
    else{
        return false;
    }
}

char * makePassword(int limiteASCII, int numeroDeCaracteres){
    int i;
    char *senha = malloc(numeroDeCaracteres);
    for(i=0; i<numeroDeCaracteres; i++){
        senha[i]=limiteASCII+rand()%26;
    }
    senha[i] = '\0';
    return senha;
}

int main(int argc, char *argv[]){
    int numeroDeCaracteres=8, limiteASCII=65; //base case for generate password
    srand(time(NULL));
    if(isValidyEntry(argc)){
        numeroDeCaracteres = abs(atoi(argv[1]));
        numeroDeCaracteres = threshold(numeroDeCaracteres);
        char *senha = malloc(numeroDeCaracteres);
        if((strcmp(argv[2], "-M")==0)
        ||  strcmp(argv[2], "-m")==0){
            if(strcmp(argv[2], "-M")==0){
                limiteASCII=65;
            }
            else{
                limiteASCII = 97;
            }
            senha = makePassword(limiteASCII, numeroDeCaracteres);
            printf("A senha desejada é %s\n", senha);

        }
        else{
            printf("Sintaxe: ./geradorDeSenha {QuantidadeDeLetras} <-M -m>");
        }
    }
    else{
            printf("Sintaxe:./geradorDeSenha {QuantidadeDeLetras} <-M -m>");
        }

    return 0;
}








