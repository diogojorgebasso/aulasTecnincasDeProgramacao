#include <stdio.h>
#include<stdlib.h>
//criação da matriz identidade
int main(int argc, char *argv[]){
    int i, j;
    int matriz[10][10];
    for(i=0; i<10; i++){
        for(j=0;j<10; j++){
            if(i==j){
                matriz[i][j]=1;
            }else{
                matriz[i][j]=0;
            }
        }
    }
    for(i=0; i<10; i++){
        if(i==0||i==9){
            printf("[");
        }else{printf("|");}
        for(j=0;j<10; j++){
            printf("%d", matriz[i][j]);
        }
        if(i==0||i==9){
            printf("]\n");
        }else{printf("|\n");}
    }
    return 0;
}
