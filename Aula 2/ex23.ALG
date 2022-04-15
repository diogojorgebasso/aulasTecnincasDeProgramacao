Algoritmo "semnome"
// Disciplina  :  [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/04/2022
Var
// Seção de Declarações das variáveis 
   valor, n_100, n_50, n_10, n_5, n_1, contador: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva("Qual o valor a ser fornecido: ")
   leia(valor)
   n_100 <- int(valor/100)
   contador <- valor - 100*n_100
   n_50 <- int(contador/50)
   contador <- contador - 50*n_50
   n_10 <- int(contador/10)
   contador <- contador -10*n_10
   n_5 <- int(contador/5)
   contador <- contador -5*n_5
   n_1 <- contador
   {trocar por "while"}
   escreva("Têm-se respectivamente notas de 100, 50, 10, 5, 1: ", n_100, n_50, n_10, n_5, n_1)

Fimalgoritmo