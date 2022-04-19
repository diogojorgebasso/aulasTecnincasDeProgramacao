Algoritmo "semnome"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : O algoritmo informa-lhe qual tipo de triângulo será formado: isósceles, escaleno ou equilátero
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Seção de Declarações das variáveis
   angulo1, angulo2, angulo3: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite o 1º ângulo")
   leia(angulo1)
   escreval("Digite o 2º ângulo")
   leia(angulo2)
   escreval("Digite o 3º ângulo")
   leia(angulo3)
   se angulo1+angulo2+angulo3 = 180 entao
      escreval("O triângulo é válido")
      se (angulo1=angulo2) e (angulo2=angulo3) entao
         escreval("Triângulo é equilátero")
      senao
         se (angulo1=angulo2) ou (angulo2=angulo3) ou (angulo1=angulo3) entao
            escreval("Triãngulo isósceles")
         senao
            escreval("Triângulo escaleno")
         fimse
      fimse
   senao
         escreval("Triângulo não é válido")
      fimse
Fimalgoritmo