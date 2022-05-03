Algoritmo "variancia"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : Cálculo de variância
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 03/05/2022
Var
// Se��o de Declara��es das vari�veis 
     v: vetor[1..20] de real
     i: inteiro
     media, vr, soma: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
     para i de 1 ate 20 faca
          escreva("Digite o elemento: ")
          v[i] <- randi(11)
          escreval(v[i])
     fimpara
     para i de 1 ate 20 faca
          soma <- soma+v[i]
     fimpara
     media <- soma/20
     para i de 1 ate 20 faca
          vr <- vr + (v[i]-media)^2/20
     fimpara
     escreva(vr)

Fimalgoritmo