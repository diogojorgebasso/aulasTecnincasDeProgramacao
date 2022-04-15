Algoritmo "Grau_rad"
// Disciplina  :  [Linguagem e Lógica de Programa��o] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM 
// Descrição   : Transformação de ângulo de grau para radiano.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 11/04/2022
Var
// Se��o de Declara��es das vari�veis 
   angulo: inteiro
   radianos: real
   

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite o ângulo em graus: ")
   leia(angulo)
   radianos <- (pi*angulo)/180
   escreva("O ângulo", angulo, "é", radianos)
Fimalgoritmo