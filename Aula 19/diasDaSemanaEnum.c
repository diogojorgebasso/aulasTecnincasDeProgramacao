#include<stdio.h>

typedef enum {domingo=1, segunda=2, terca=4, quarta=8, quinta=16, sexta=32, sabado=64} t_semana;

int main(int argc, char *argv[]){
    t_semana sem;
    printf("%d\n", sexta);
    sem=sexta;
    printf("Semana = %d\n", sem);
    return 0;
}
