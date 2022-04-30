Algoritmo "semnome"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Cálculo de média para 8 notas dadas.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 27/04/2022
Var
// Se��o de Declara��es das vari�veis 
   v: vetor [1..8] de real
   i: inteiro
   contador: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
    contador <-0
    para i de 1 ate 8 faca
         escreva("Digite o num. p/ ", i, " :")
         leia(v[i])
         contador <- contador + v[i]
    fimpara
    escreva("A m�dia � ", contador/8)
Fimalgoritmo