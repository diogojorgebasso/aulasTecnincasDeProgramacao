Algoritmo "semnome"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : O algoritmo informa-lhe qual tipo de tri�ngulo ser� formado: is�sceles, escaleno ou equil�tero
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Se��o de Declara��es das vari�veis
   angulo1, angulo2, angulo3: real

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite o 1� �ngulo")
   leia(angulo1)
   escreval("Digite o 2� �ngulo")
   leia(angulo2)
   escreval("Digite o 3� �ngulo")
   leia(angulo3)
   se angulo1+angulo2+angulo3 = 180 entao
      escreval("O tri�ngulo � v�lido")
      se (angulo1=angulo2) e (angulo2=angulo3) entao
         escreval("Tri�ngulo � equil�tero")
      senao
         se (angulo1=angulo2) ou (angulo2=angulo3) ou (angulo1=angulo3) entao
            escreval("Tri�ngulo is�sceles")
         senao
            escreval("Tri�ngulo escaleno")
         fimse
      fimse
   senao
         escreval("Tri�ngulo n�o � v�lido")
      fimse
Fimalgoritmo