Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/04/2022
Var
// Seção de Declarações das variáveis 
   angulo: inteiro
   distancia: real
   tangente: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Qual o ângulo?")
   leia(angulo)
   escreva("Qual a distãncia? ")
   leia(distancia)
   tangente <- tan(angulo*pi/180)
   escreva("A altura, pois, da torre da torre é: ", distancia*tangente)
Fimalgoritmo