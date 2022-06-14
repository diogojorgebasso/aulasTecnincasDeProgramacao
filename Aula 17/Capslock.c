#include<stdio.h>
#include<string.h>

typedef enum{false, true} boolean;

boolean isCorrectEntry(char *argv){
  if((strcmp(argv[2], "-M")==0)||strcmp(argv[2], "-m")==0){
    return true
  }
  else{
    return false
  }
}

  boolean isExecutableWithEntry(int numberOfParameters){
    if(numberOfParameters==2){
      return true;
    }
    else{
      return false;
    }
  }
  int setValuesOfLimitsAndConversionConstant(char entry){
    int limiteInferior, limiteSuperior, diferencaEntreASCIIMaisculoMinusculo;
    if(strcmp(entry, "-M")){
      limiteInferior = 97;
      limiteSuperior = 122;
      diferencaEntreASCIIMaisculoMinusculo = 32;
    }
    else{
      limiteInferior = 65;
      limiteSuperior = 90;
      diferencaEntreASCIIMaisculoMinusculo = -32;
    }
  }
int LoopASCII(char palavra, int limiteInferior, int limiteSuperior ){
  char conversao;
  int tamanhoDaPalavra;
  tamanhoDaPalavra = strlen(palavra);
  int i;
  for(i=0; i<tamanhoDaPalavra; i++){
    if((palavra[i]>=limiteInferior) && (palavra[i]>=limiteSuperior)){
      palavra[i] += conversao;
    }
  }
  return conversao
}

int main(int argc, char *argv[]){
  char *palavra;
  if(isExecutableWithEntry(argc)){
    strcpy(palavra, argv[1]);
    if(isCorrectEntry(argv)){
      setValuesOfLimitsAndConversionConstant(argv[2]);
      palavra = LoopASCII(palavra, limiteInferior, limiteSuperior )
      printf("A palavra é %s", palavra)
    }
    else{
      printf("Erro de Sintaxe: ./converte PALAVRA <-M -m>\n")
    }
  }
  else{
    printf("Sintaxe: ./converte PALAVRA <-M -m>\n")
  }
  return 0;  
}