#include <stdio.h>
#include<stdlib.h>
//criação de matriz
int main(int argc, char *argv[]){
    int i, j, matriz[3][4];
    for(i=0; i<3; i++){
        for(j=0;j<4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<3; i++){
        if(i==0||i==3-1){
            printf("[");
        }else{printf("|");}
        for(j=0;j<4; j++){
            printf("%d ", matriz[i][j]);
        }
        if(i==0||i==3-1){
            printf("]\n");
        }else{printf("|\n");}
    }
    return 0;
}
