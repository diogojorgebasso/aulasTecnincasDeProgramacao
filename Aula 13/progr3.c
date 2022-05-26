#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int vetA[5] = {1,2,3,4,5};
    int vetB[5] = {2,3,4,5,6};
    int i,j ;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(vetA[i] == vetB[j]){
                break;
            }
        }
        if (j==5){
            printf("%d", vetA[i]);
        }
    }
    return 0;
}

