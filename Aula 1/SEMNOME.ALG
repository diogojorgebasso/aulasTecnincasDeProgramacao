Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/04/2022

Var
   // Seção de Declarações das variáveis
   nome: caractere
   media: real
   n1,n2,n3: real
Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Seu nome: ")
   leia(nome)
   escreval("Seu nome é: ", nome)
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
   {cálculo  da média}
   media <- (n1+n2+n3)/3
   escreva("Sua média é: ", media:2:2)
Fimalgoritmo

