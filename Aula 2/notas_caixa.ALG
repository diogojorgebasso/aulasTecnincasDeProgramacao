Algoritmo "notas"
// Disciplina  :  [Linguagem e L�gica de Programa��o] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Cálculo de quantas notas serão necessárias para, dado um valor, achar-lhe. 
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 11/04/2022
Var
// Se��o de Declara��es das vari�veis 
   valor, n_100, n_50, n_10, n_5, n_1, contador: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Qual o valor a ser fornecido: ")
   leia(valor)
   n_100 <- int(valor/100)
   contador <- valor - 100*n_100
   n_50 <- int(contador/50)
   contador <- contador - 50*n_50
   n_10 <- int(contador/10)
   contador <- contador -10*n_10
   n_5 <- int(contador/5)
   contador <- contador -5*n_5
   n_1 <- contador
   {trocar por "while"}
   escreva("T�m-se respectivamente notas de 100, 50, 10, 5, 1: ", n_100, n_50, n_10, n_5, n_1)

Fimalgoritmo