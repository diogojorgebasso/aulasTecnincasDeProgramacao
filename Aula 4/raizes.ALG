Algoritmo "semnome"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : Leitura de dois n�meros inteiros e positivos e execute uma das seguintes opera��es: 1- O primeiro n�mero elevado ao segundo n�mero. 2- Raiz quadrada de cada um dos n�meros. 3- Raiz c�bica de cada um dos n�meros.
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Se��o de Declara��es das vari�veis
   a,b, opcao: real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreva("Digite o 1� n�mero: ")
   leia(a)
   escreva("Digite o 2� n�mero: ")
   leia(b)
   escreval("Escolha:")
   escreval("1- O primeiro n�mero elevado ao segundo n�mero;")
   escreval("2- Raiz quadrada de cada um dos n�meros;")
   escreval("3- Raiz c�bica de cada um dos n�meros.")
   leia(opcao)
   se (a>0) e (b>0) entao
      escolha opcao
      caso 1
         escreval("1� elevado ao 2�: ", a^b)
      caso 2
         escreval("Raiz do primeiro ", raizq(a), "; segundo, ", raizq(b))
      caso 3
         escreval("Raiz c�bica do primeiro", (a)^(1/3), "; segundo, ", b^(1/3))
      fimescolha
   senao
         escreval("Op��o inv�lida!")
   fimse
Fimalgoritmo