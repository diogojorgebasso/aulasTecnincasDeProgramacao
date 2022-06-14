#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef enum {false, true} boolean;

int main(int argc, char *argv[]){
  int lerEntradaDeTempo(){
    return abs(atoi(argv[1]));
  }

  boolean isExecutableWithEntry(int numberOfParameters){
    if(numberOfParameters==2){
      return true;
    }
    else{
      return false;
    }
  }
  double horaDeInicio, horaDeFim, diferencaEntreOsTempos;
  int atraso;
  const int MAX_SECONDS = 60;
  horaDeInicio = clock();
  horaDeFim = clock();

  if(isExecutableWithEntry(argc)){
    atraso = lerEntradaDeTempo();
    if(atraso>MAX_SECONDS){
      atraso = 60;
    }
    printf("Aguarde...");
    diferencaEntreOsTempos = (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    while (diferencaEntreOsTempos < atraso){
      horaDeFim = clock();
      diferencaEntreOsTempos = (horaDeFim - horaDeInicio) / CLOCKS_PER_SEC;
    }
    printf("O atraso acabou.\n");
  }
  else{
    printf("Erro. Digite: ./atraso {TempoEmSegundos}");
  }
  return 0;
}