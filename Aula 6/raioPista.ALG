Algoritmo "raioPista"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : Dado a quantidade de raias, com o raio, calcular os per�metros.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 25/04/2022
Var
// Se��o de Declara��es das vari�veis 
   qntd, r, i: inteiro
   conta: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
    escreva("Quantas raias queres adicionar? ")
    leia(qntd)
    escreva("Qual o raio da 1�? ")
    leia(r)
    para i de 1 ate qntd faca
         conta<-2*pi*r*i
         escreval("A raia n� ", i, " � ", conta:1:2)
    fimpara
Fimalgoritmo