Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/04/2022
Var
// Seção de Declarações das variáveis 
   segundos, horas, minutos, segundos_2: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Digite quantos segundos: ")
   leia(segundos)
   horas <- int((segundos/60)/60)
   minutos <- int((segundos-3600*horas)/60)
   segundos_2 <- (segundos % 60)
   escreva(horas,":", minutos, ":", segundos_2)

Fimalgoritmo