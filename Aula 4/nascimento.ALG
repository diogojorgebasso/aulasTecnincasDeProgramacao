Algoritmo "semnome"
// Disciplina  : [Linguagem e L�gica de Programa��o]
// Professor   : Thatyana de Faria Piola Seraphim
// Descri��o   : O algoritmo realiza a leitura do ano de nascimento de uma pessoa e o ano atual
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
// Se��o de Declara��es das vari�veis 
   dia, mes, ano: inteiro
   anos, meses, dias, semanas: inteiro
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva("Dia de nascimento: ")
   leia(dia)
   escreva("M�s de nascimento: ")
   leia(mes)
   escreva("Ano de nascimento: ")
   leia(ano)
   se mes>4 entao
      anos <- 2022-ano-1
      escreval("A pessoa tem ", anos, "anos;")
      meses <-  anos*12+(mes-4)
      escreval("Meses: ", meses )
      dias <- meses*30 + int(dias-18)
      escreval("Dias: ", dias)
      semanas <- int(dias/ 7 )
      escreval("Semanas: ", semanas)
   senao
      anos <- 2022-ano
      escreval("A pessoa tem ", anos, "anos;")
      meses <-  anos*12+(4-mes)
      escreval("Meses: ", meses )
      dias <- meses*30 + int(dias-18)
      escreval("Dias: ", dias)
      semanas <- int(dias/ 7 )
      escreval("Semanas: ", semanas)
   fimse
Fimalgoritmo