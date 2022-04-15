Algoritmo "media"
// Disciplina  : [Linguagem e Lógica de Programação] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descrição   : Cálculo de média para três valores
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 06/04/2022

Var
   // Seção de Declara��es das vari�veis
   nome: caractere
   media: real
   n1,n2,n3: real
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva("Seu nome: ")
   leia(nome)
   escreval("Seu nome: ", nome)
   escreva("Sua nota: ")
   leia(n1)
   escreval("Nota 1  digitada: ", n1)
   escreva("Nota 2: ")
   leia(n2)
   escreval("Nota 1 digitada: ", n2)
   escreva("Nota 3: ")
   leia(n3)
   escreval("Nota 3 digitada: ", n3)
   limpatela
   {c�lculo  da m�dia}
   media <- (n1+n2+n3)/3
   escreva("Sua média: ", media:2:2)
Fimalgoritmo

