Algoritmo "Torre_tangente"
// Disciplina  :  [Linguagem e Lógica de Programa��o] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM 
// Descri��o   : Cálculo da altura de uma torre baseado no ângulo e o tamanho de sombra; cálculo da tangente, no limite.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 11/04/2022
Var
// Se��o de Declara��es das vari�veis 
   angulo: inteiro
   distancia, tangente: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Qual o ângulo?")
   leia(angulo)
   escreva("Qual a distância? ")
   leia(distancia)
   tangente <- tan(angulo*pi/180)
   escreva("A altura, pois, da torre da torre é ", distancia*tangente)
Fimalgoritmo