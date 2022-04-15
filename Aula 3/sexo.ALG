Algoritmo "concessionaria"
// Disciplina  :  [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 13/04/2022
Var
   // Seção de Declarações das variáveis
   modalidade_veiculo, valor, roubo: inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("CONCESSIONÁRIO DO DIOGO")
   escreval("Digite a opção...")
   escreval("1- Carro(car)")
   escreval("2- Moto(motorcycle)")
   escreval("3- Caminhão(truck)")
   escreval("4- ôniubs(bus)")
   escreval("5- SUV(SUV)")
   escreval("6- Triciclo(Tricycle)")
   escreval("7- Lancha")
   leia(modalidade_veiculo)
   escolha modalidade_veiculo
   caso 1
      escreva("Você escolheu carro. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 2
      escreva("Você escolheu moto. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 3
      escreva("Você escolheu caminhão. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 4
      escreva("Você escolheu ônibus. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 5
      escreva("Você escolheu SUV. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 6
      escreva("Você escolheu lancha. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   caso 7
      escreva("Você escolheu carro. Qual o valor deste?")
      leia(valor)
      escreva("Digite a alíquota do imposto municipal (sem %): ")
      leia(roubo)
      escreval("O total com IPVA(4%) sai :", valor+(valor*(roubo+4))/100 )
   fimescolha

Fimalgoritmo