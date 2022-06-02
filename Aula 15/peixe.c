#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
/* Made by (c) 2022 Diogo */

int larva=0, alga=0, sais=1;
int jogadas=1;
char tanque[25][50];

void imprime(){
    int i,j;
    printf("              1111111111222222222233333333334444444444\n");
    printf("    01234567890123456789012345678901234567890123456789\n");
    for(i=0; i<25; i++){
        printf("[%2d]", i);
        for(j=0; j<50; j++){
            printf("%c", tanque[i][j]);
        }
        printf("|\n");
    }
}
void inicializa(){
    int i,j;
    for(i=0; i<25; i++){
        for(j=0; j<50; j++){
            tanque[i][j] = ' ';
        }
    }
    for(i=0; i<3; i++){
        int l = rand()%24;
        int c = rand()%48;
        tanque[l][c+1] = ':';
        tanque[l+1][c]=':';
        tanque[l+1][c+1]=':';
        tanque[l+1][c+2]=':';
    }
    for(i=0; i<10; i++){
        int l = rand()%25;
        int c = rand()%50;
        if (tanque[l][c] == ''){
            tanque[l][c] = '@';
        }
        else{
            i--;
        }

    }
}

int main( int argc, char * argv[]){
    srand(time(NULL));
    inicializa();
    char op=' ';
    while(op != 's'){
        //a
        imprime();
        printf("larva=%d alga=%d sais=%d\n", larva, alga, sais);
        printf("(c)ultivar / (f)ertilizar / (m)over / (q)uebrar / (p)escar / (n)oite / (s)air");
        printf("[Jogada %d] opcao:", jogadas);
        op = getchar();
        printf("%c\n", op);
        switch(op){
            case 'c' : //c
                break;
            case 'f' : //d
                break;
            case 'm' : //e
                break;
            case 'q' : //f
                break;
            case 'p' : //g
                break;
            case 'n' : //h
                break;
            case 's' :
                break;
            default:
                printf("[opcao invalida]");
        }
        if(jogadas > 7){
            //b+h
        }
    }
    return 0;
}
