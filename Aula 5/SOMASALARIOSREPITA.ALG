Algoritmo "somaSalarios"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descri��o   : Variação do algoritmo "SomaSalarios" com estrutura de repetição.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 20/04/2022
Var
   // Se��o de Declara��es das vari�veis
   salario, soma: inteiro
   opt: caractere

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   soma <-0

   repita
      enquanto(salario<0) faca
         escreva("Digite o valor do sal�rio: ")
         leia(salario)
      fimenquanto
      soma <- soma+salario
   ate(salario=0)
   escreval("Soma dos sal�rios= ", soma)

Fimalgoritmo