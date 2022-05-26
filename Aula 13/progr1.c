#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int vetor[10];
    int i;
    srand(time(NULL));
    for(i=0; i<10; i++){
        vetor[i] = rand()%20;
    }
    for(i=9; i>=0; i--){
        printf("[%d]", vetor[i]);
    }
    return 0;
}
