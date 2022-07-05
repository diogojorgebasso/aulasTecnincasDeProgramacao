#include<stdio.h>
#include<string.h>

#define NUMBER_OF_PACIENTS 20
typedef struct {
    char nome[30],sexo[1];
    int idade;
    float peso,altura;
} dadosPaciente;

void printPesoIdeal(float calculoPesoIdeal, dadosPaciente paciente){
    if(calculoPesoIdeal>paciente.peso){
        printf("%s com %d anos esta acima do peso ideal\n", paciente.nome, paciente.idade);
    }
    else{
        printf("%s com %d anos esta abaixo do peso ideal\n", paciente.nome, paciente.idade);
        printf("Falta-lhe %dkg para o peso ideal.\n", calculoPesoIdeal-paciente.peso);
    }
}

int main(int argc, char*argv[]){
    int i;
    dadosPaciente paciente;
    dadosPaciente pacientes[NUMBER_OF_PACIENTS];
    for(i=0; i<NUMBER_OF_PACIENTS; i++){
        printf("Digite o nome do cidadao n%d: ", i+1);
        scanf("%s", &paciente.nome);
        printf("Digite o sexo [M/F/I]: ");
        scanf("%s", &paciente.sexo);
        printf("Digite a idade: ");
        scanf("%d", &paciente.idade);
        printf("Digite o peso: ");
        scanf("%f", &paciente.peso);
        printf("Digite a altura: ");
        scanf("%f", &paciente.altura);
        pacientes[i] = paciente;
    }
    //paciente mais pesada
    int currentPeso=0;
    char pessoaMaisPesada[20];
    float calculoPesoIdeal;
    for(i=0; i<NUMBER_OF_PACIENTS; i++){
        if(pacientes[i].peso > currentPeso){
            currentPeso = pacientes[i].peso;
            strcpy(pessoaMaisPesada, pacientes[i].nome);
        }
        if(strcmp((pacientes[i].sexo),"M")==0){
            calculoPesoIdeal= (72.7*pacientes[i].altura) - 58;
            printPesoIdeal(calculoPesoIdeal, pacientes[i]);
        }
        else{
            if(strcmp((pacientes[i].sexo),"F")==0){
                calculoPesoIdeal= (62.1*pacientes[i].altura) - 44.7;
                printPesoIdeal(calculoPesoIdeal, pacientes[i]);
            }
            else{
                printf("Digite, por favor, seu sexo biológico para achar seu peso ideal.\n");
            }
        }

    }
    printf("%s eh a pessoa mais pesada com %dkg.", pessoaMaisPesada, currentPeso);
    return 0;
}
