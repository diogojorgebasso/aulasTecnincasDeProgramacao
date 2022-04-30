Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Dado o valor de 8 notas para quatro alunos, calcula-se a média tanto geral quanto individual.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 27/04/2022
Var
   // Se��o de Declara��es das vari�veis
   v: vetor[1..8, 1..4] de inteiro
   i,j: inteiro
   contador: real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   para i de 1 ate 8 faca
      para j de 1 ate 4 faca
         escreva("Digite a", j, "� nota do", i, "� aluno: ")
         v[i,j] <- randi(11)
      fimpara
   fimpara
   para i de 1 ate 8 faca
      para j de 1 ate 4 faca
         escreva(v[i,j])
      fimpara
   fimpara
      para i de 1 ate 8 faca
         para j de 1 ate 4 faca
            escreva(v[i,j])
      fimpara
   fimpara

Fimalgoritmo