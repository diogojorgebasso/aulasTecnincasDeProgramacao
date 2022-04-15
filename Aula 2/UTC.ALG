Algoritmo "UTC"
// Disciplina  : [Linguagem e Lógica de Programação] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM 
// Descri��o   : Transformação de segundos no padrão UTC.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 11/04/2022
Var
// Se��o de Declara��es das vari�veis 
   segundos, horas, minutos, segundos_2: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Digite quantos segundos: ")
   leia(segundos)
   horas <- int((segundos/60)/60)
   minutos <- int((segundos-3600*horas)/60)
   segundos_2 <- (segundos % 60)
   escreva(horas,":", minutos, ":", segundos_2)

Fimalgoritmo