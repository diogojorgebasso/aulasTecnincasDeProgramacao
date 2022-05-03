Algoritmo "media_vetores"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : Média de dois vetores
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 02/05/2022
Var
// Se��o de Declara��es das vari�veis 
   vum: vetor[1..4] de inteiro
   vdois: vetor[1..4] de inteiro
   i,j: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   para i de 1 ate 4 faca
        escreva("Digite um n�mero")
        leia(vum[i])
   fimpara
   para j de 1 ate 4 faca
        escreva("Digite um n�mero")
        leia(vdois[j])
   fimpara
   para i de 1 ate 4 faca
        escreva((vum[i]+vdois[i])/2)
   fimpara
Fimalgoritmo