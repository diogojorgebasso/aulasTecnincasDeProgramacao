Algoritmo "semnome"
// Disciplina  :  [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Se��o de Declara��es das vari�veis
   hora_inicio, min_inicio, hora_fim, min_fim: inteiro

Inicio
   // Se��o de Comandos, procedimento, fun��es, operadores, etc...
   escreval("Digite a hora de in�cio: ")
   leia(hora_inicio)
   escreval("Digite o min de in�cio: ")
   leia(min_inicio)
   escreval("Digite a hora de fim: ")
   leia(hora_fim)
   escreval("Digite o min de fim: ")
   leia(min_fim)
   se(min_inicio > min_fim) entao
      escreval("Durar-se-� ", 60-min_inicio+min_fim, "minutos.")
      se (hora_inicio > hora_fim) entao //tira-se uma hora
         escreval("Gastar-se-� ", 24-hora_inicio+hora_fim-1, " horas.")
      senao
         escreval("Gastar-se-� ", hora_fim-hora_inicio-1, " horas.")
      fimse
   senao
      escreval("Durar-se-� ", -min_inicio+min_fim, " minutos.")
      se (hora_inicio > hora_fim) entao //tira-se uma hora
         escreval("Gastar-se-� ", 24-hora_inicio+hora_fim, " horas.")
      senao
         escreval("Gastar-se-� ", hora_fim-hora_inicio, " horas.")
      fimse
   fimse
Fimalgoritmo