Algoritmo "semnome"
// Disciplina  : [Linguagem e Lógica de Programação] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM
// Descrição   : Checagem de nota
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 13/04/2022
Var
   a,b,c: real

Inicio
   escreva("Digite a nota1:  ")
   leia(a)
   escreva("Digite a nota2:  ")
   leia(b)
   escreva("Digite a nota3:  ")
   leia(c)
   se(a>b) e (a>c) entao {checagem da condicional}
      escreva("A é maior")
   senao
      se(b>c) entao
         escreva("B é MAIOR")
      senao
         escreva("C é MAIOR")
      fimse
   fimse

Fimalgoritmo