Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 18/04/2022
Var
   // Seção de Declarações das variáveis
   hora_inicio, min_inicio, hora_fim, min_fim: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Digite a hora de início: ")
   leia(hora_inicio)
   escreval("Digite o min de início: ")
   leia(min_inicio)
   escreval("Digite a hora de fim: ")
   leia(hora_fim)
   escreval("Digite o min de fim: ")
   leia(min_fim)
   se(min_inicio > min_fim) entao
      escreval("Durar-se-á ", 60-min_inicio+min_fim, "minutos.")
      se (hora_inicio > hora_fim) entao //tira-se uma hora
         escreval("Gastar-se-à ", 24-hora_inicio+hora_fim-1, " horas.")
      senao
         escreval("Gastar-se-à ", hora_fim-hora_inicio-1, " horas.")
      fimse
   senao
      escreval("Durar-se-á ", -min_inicio+min_fim, " minutos.")
      se (hora_inicio > hora_fim) entao //tira-se uma hora
         escreval("Gastar-se-à ", 24-hora_inicio+hora_fim, " horas.")
      senao
         escreval("Gastar-se-à ", hora_fim-hora_inicio, " horas.")
      fimse
   fimse
Fimalgoritmo