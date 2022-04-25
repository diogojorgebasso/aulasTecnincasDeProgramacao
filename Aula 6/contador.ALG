Algoritmo "contador"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : Conta os intervalos de determinados números
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 25/04/2022
Var
   // Se��o de Declara��es das vari�veis
   cont_unidade, cont_dezena, cont_centena, cont_milha, n: inteiro
   opt: caractere
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   opt <- "S"
   enquanto opt="S" faca
      escreva("digite um n�mero...")
      leia(n)
      se n <= 9 entao
         cont_unidade <- cont_unidade + 1
      fimse
      se (n <=99) e (n>9) entao
         cont_dezena <- cont_dezena +1
      fimse
      se (n <=999)e (n>99) entao
         cont_centena <- cont_centena +1
      fimse
      se (n <=9999) e (n>999) entao
         cont_dezena <- cont_milha +1
      fimse
      escreval("Desejas continuar? [S/N]")
      leia(opt)
   fimenquanto
   escreval("Os intervalos foram respectivamente: ")
   escreval("Unidade: ", cont_unidade)
   escreval("Dezena: ", cont_dezena)
   escreval("Centena: ", cont_centena)
   escreval("Milhar: ", cont_milha)

Fimalgoritmo