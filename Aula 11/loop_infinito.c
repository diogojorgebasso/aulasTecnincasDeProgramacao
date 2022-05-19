#include <stdio.h>
typedef enum {false,true} bool;
int main(int argc, char *argv[]){
    float total= 0.0, salario;
    while(true){
        printf("Digite o valor de salário = ");
        scanf("%f", &salario);
        total += salario;
        if (salario ==0){
            break;
        }
    }
    printf("Somatório = %f\n", total);
    return 0;
}
