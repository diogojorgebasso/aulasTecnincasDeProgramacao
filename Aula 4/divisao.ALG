Algoritmo "divisao"
// Disciplina  : [Linguagem e Lógica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : O algoritmo deverá verificar se o número digitado: positivo ou negativo; se é divisível por 2, 3, 5, 7, 11.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Se��o de Declara��es das vari�veis
   n: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva("Digite o número")
   leia(n)
   se n>0 entao
      escreval("O número é positivo")
   senao
      escreval("O número é negativo")
   fimse
      se n%2=0 entao
         escreval("O número é divisível por 2")
      fimse
      se n%3=0 entao
         escreval("O número é divisível por 3")
      fimse
      se n%5=0 entao
         escreval("O número é divisível por 5")
      fimse
      se n%7=0 entao
         escreval("O número é divisível por 7")
      fimse
      se n%11=0 entao
         escreval("O número é divisível por 11")
      fimse
Fimalgoritmo
