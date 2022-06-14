#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define 
typedef enum{false, true} boolean;

int sorteiaNumero(int faces){
  return rand()%faces+1;  
}

boolean isExecutableWithEntry(int numberOfParameters){
  if(numberOfParameters==2){
    return true
  }
  else{
    return false
  }

}

int main(int argc, char *argv[]){
  int lerEntradaDeFaces(){
    return abs(atoi(argv[1]));
  }
  int faces, sorteador;
  const int MAX_FACES = 9;
  srand(time(NULL));

  if(isExecutableWithEntry(argc)){
    faces = lerEntradaDeFaces();
    if(faces>MAX_FACES){
      faces = 10;
    }
    sorteador = sorteiaNumero(faces);
    printf("Sorteado a face: %d\n", sorteador);

  }
  else{
    printf("Digite: ./sorteador QuantasFaces\n");
  }
  return 0;
}