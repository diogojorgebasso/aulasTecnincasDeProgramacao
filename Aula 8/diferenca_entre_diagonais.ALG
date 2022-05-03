Algoritmo "diferenca_diagonais"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : Diferença da soma das diagonais
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 02/05/2022
Var
// Se��o de Declara��es das vari�veis 
   v: vetor[1..5,1..5] de inteiro
   i,j, soma, soma2: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
    soma <- 0
    para i de 1 ate 5 faca
         para j de 1 ate 5 faca
              v[i,j] <- randi(11)
              escreva(i, "º linha; ", j, "coluna: ", v[i,j])
              se j>i entao
                 soma <- soma+v[i,j]
              fimse
         fimpara
    fimpara
        para i de 1 ate 5 faca
         para j de 1 ate 5 faca
              v[i,j] <- randi(11)
              escreva(i, "º linha; ", j, "coluna: ", v[i,j])
              se j<i entao
                 soma2 <- soma2+v[i,j]
              fimse
         fimpara
    fimpara
    escreva(abs(soma-soma2))
Fimalgoritmo