#include<stdio.h>
#include<string.h>
typedef struct{
    char nome[30];
    int numConta;
    float saldo;
}stContaCliente;

#define NUMBER_OF_ClIENTS 15+1

typedef enum{false, true} bool;

bool isAlreadyAccountNumber(int account, stContaCliente clientes[NUMBER_OF_ClIENTS]){
    int j;
    for(j=0; j<NUMBER_OF_ClIENTS; j++){
        if(clientes[j].numConta==account){
            return true;
        }
    }
    return false;
}

int menu(){
    int option;
    bool valid=true;
    printf("Menu do Diogos Bank\n");
    printf("Opcoes disponiveis\n");
    printf("1 - Cadastrar uma conta\n");
    printf("2 - Visualizar uma conta\n");
    printf("3 - Excluir a conta de menor saldo\n");
    while(valid){
        printf("Digite abaixo:");
        scanf("%d", &option);
        if((option<4)&&(option>0)){
            return option;
        }
        printf("Digite um numero entre 1 a 3!\n");
    }

}


int main(int argc, char*argv[]){
    int i=0, number;
    int numConta;
    int maxCadastro=0;
    stContaCliente cliente;
    stContaCliente clientes[30]; //definir trinta posi��es no vetor de clientes
    char clienteBuscado[30];
    float currentSaldo;
    int posicaoClientesParaDelecao;

    while(maxCadastro<NUMBER_OF_ClIENTS){
        number = menu();
        switch(number){
            case 1:
                printf("Digite o nome do cidadao n%d: ", i+1);
                scanf("%s", &cliente.nome);
                printf("Digite o numero de Conta: ");
                scanf("%d", &cliente.numConta);
                while(isAlreadyAccountNumber(cliente.numConta, clientes)){
                    printf("Conta com numero repetido nao permitido!\n");
                    printf("Digite o numero de Conta: ");
                    scanf("%d", &cliente.numConta);
                }
                printf("Digite o saldo: ");
                scanf("%f", &cliente.saldo);
                clientes[maxCadastro] = cliente;
                maxCadastro++;
                break;
            case 2:
                printf("De qual cliente desejas visualizar a conta? ");
                scanf("%s", &clienteBuscado);
                for(i=0; i<NUMBER_OF_ClIENTS; i++){
                    if(strcmp(clientes[i].nome,clienteBuscado)==0){
                        printf("Segue a conta n %d com R$%f encontrada do cliente %s\n", clientes[i].numConta, clientes[i].saldo, clientes[i].nome);
                    }
                }
                break;
            case 3:
                currentSaldo=clientes[0].saldo;
                for(i=0; i<NUMBER_OF_ClIENTS; i++){
                    if(currentSaldo>clientes[i].saldo){
                        currentSaldo = clientes[i].saldo;
                        posicaoClientesParaDelecao = i;
                    }
                }
                printf("Excluindo a conta n %d de %s\n", clientes[posicaoClientesParaDelecao].numConta, clientes[posicaoClientesParaDelecao].nome);
                for ( i = posicaoClientesParaDelecao - 1 ; i < NUMBER_OF_ClIENTS - 1 ; i++ ){
                        clientes[i] = clientes[i+1];
                }
                maxCadastro--;
                break;
        }

    }
    return 0;
}
