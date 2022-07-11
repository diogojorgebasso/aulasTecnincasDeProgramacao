#include<stdio.h>

enum e_semana{domingo=1, segunda=2, terca=4, quarta=8, quinta=16, sexta=32, sabado=64};

int main(int argc, char *argv[]){
    printf("Semana = %d %d %d \n", domingo, terca, sabado);
    return 0;
}

