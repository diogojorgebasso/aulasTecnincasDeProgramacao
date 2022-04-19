Algoritmo "semnome"
// Disciplina  : [Linguagem e Lógica de Programação]
// Professor   : Thatyana de Faria Piola Seraphim
// Descrição   : Leitura de dois números inteiros e positivos e execute uma das seguintes operações: 1- O primeiro número elevado ao segundo número. 2- Raiz quadrada de cada um dos números. 3- Raiz cúbica de cada um dos números.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Seção de Declarações das variáveis
   a,b, opcao: real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("Digite o 1º número: ")
   leia(a)
   escreva("Digite o 2º número: ")
   leia(b)
   escreval("Escolha:")
   escreval("1- O primeiro número elevado ao segundo número;")
   escreval("2- Raiz quadrada de cada um dos números;")
   escreval("3- Raiz cúbica de cada um dos números.")
   leia(opcao)
   se (a>0) e (b>0) entao
      escolha opcao
      caso 1
         escreval("1º elevado ao 2º: ", a^b)
      caso 2
         escreval("Raiz do primeiro ", raizq(a), "; segundo, ", raizq(b))
      caso 3
         escreval("Raiz cúbica do primeiro", (a)^(1/3), "; segundo, ", b^(1/3))
      fimescolha
   senao
         escreval("Opção inválida!")
   fimse
Fimalgoritmo