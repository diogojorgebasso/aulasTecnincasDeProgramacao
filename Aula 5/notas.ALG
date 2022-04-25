Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Média das notas de um dado aluno
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 20/04/2022
Var
   // Se��o de Declara��es das vari�veis
   n1,n2,media:real
   i:inteiro
   contMaior: inteiro
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   contMaior <-0
   para i de 1 ate 5 faca
      escreval("Digite as notas do ", i, "� aluno.")
      escreva("Nota 1: ")
      leia(n1)
      escreva("Nota 2: ")
      leia(n2)
      media <- (n1+n2)/2
      se (media>=6) entao
         contMaior <- contMaior+1
      fimse
   fimpara
   escreval("Quantidade de alunos com nota maior: ", contMaior)
   escreval("Quantidade de alunos com nota maior: ", 5-contMaior)
Fimalgoritmo