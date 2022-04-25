Algoritmo "somaSalarios"
// Disciplina  : [Linguagem e Lógica de Programa��o]
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Soma dos sal�rios
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 20/04/2022
Var
   // Se��o de Declara��es das vari�veis
   salario, soma: inteiro
   opt: caractere
   
Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   soma <-0
   opt <-"s"
   enquanto (opt="s") faca
      escreva("Digite o valor do sal�rio: ")
      leia(salario)
      soma <- soma+salario
      escreva("Desejas continuar?")
      leia(opt)
   fimenquanto
   escreval("Soma dos salarios= ", soma)

Fimalgoritmo