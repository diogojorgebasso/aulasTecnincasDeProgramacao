Algoritmo "colinearidade"
// Disciplina  :  [Linguagem e Lógica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : Dado três coordenadas, determinar se os pontos são colineares
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 25/04/2022
Var
   // Se��o de Declara��es das vari�veis
   x_a, y_a, x_b, y_b, x_c,y_c: inteiro
   opt:caractere
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   opt <- "S"
   enquanto (opt="S") faca
      escreval("Digite as coordenadas de A")
      escreva("X: ")
      leia(x_a)
      escreva("Y: ")
      leia(y_a)
      escreval("Digite as coordenadas de B")
      escreva("X: ")
      leia(x_b)
      escreva("Y: ")
      leia(y_b)
      escreval("Digite as coordenadas de C")
      escreva("X: ")
      leia(x_c)
      escreva("Y: ")
      leia(y_c)
      se (((y_a-y_b)/(x_a-x_b))=((y_b-y_c)/(x_b-x_c))) entao
         escreval("Os pontos s�o colineares.")
      senao
         escreval("N�o colineares")
      fimse
      escreva("Desejas continuar? [S/N] ")
      leia(opt)
   fimenquanto
Fimalgoritmo