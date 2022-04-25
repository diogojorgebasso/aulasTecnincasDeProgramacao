Algoritmo "Fibonnaci"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : Escreva a sequência de Fibo
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 25/04/2022
Var
   // Se��o de Declara��es das vari�veis
   n1,n2, n ,total, i: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva("Digite um n�mero: ")
   leia(n)
   n1<-0
   n2<-1
   total<-0
   se n=0 entao
      escreva("", n1)
   senao
      se (n=1) entao
         escreval("", n2)
      senao
         se (n >1) entao
            total <- 1
            escreva(total)
            para i de 2 ate n faca
               total <-n1+n2
               n1 <- n2
               n2<-total
               escreva("", n2)
            fimpara
         fimse
      fimse
   fimse

Fimalgoritmo