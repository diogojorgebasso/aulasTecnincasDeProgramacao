Algoritmo "complitude_triangulo"
// Disciplina  : [Linguagem e Lógica de Programação] 
// Professor   : THATYANA DE FARIA PIOLA SERAPHIM 
// Descri��o   : Dado dois lados e um ângulo, achar o restante das informações para a complitude do triângulo
// Autor(a)    : Diogo Jorge Basso
// Data atual  : 11/04/2022
Var
// Se��o de Declara��es das vari�veis 
  lado1, lado2, lado3: real
  angulo1, angulo2,angulo3, angulo2_graus, angulo3_graus: real
  cosseno: real
Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
  escreva("Qual o valor do primeiro lado? ")
  leia(lado1)
  escreva("Qual o valor do segundo lado? ")
  leia(lado2)
  escreva("Qual o valor do ângulo? ")
  leia(angulo1)
  cosseno <-  cos(angulo1*PI/180)
  lado3 <- raizq(lado1^2 + lado2^2 -2*lado1*lado2*cosseno)
  angulo2 <- arccos((lado1^2 - lado2^2 + lado3^2)/(2*lado1*lado3))
  angulo3 <- arccos(( lado2^2 -lado1^2 + lado3^2)/(2*lado3*lado2))
  angulo2_graus <- angulo2*180/pi
  angulo3_graus <- angulo3*180/pi
  escreval("O lado c é", lado3, "; o ângulo entre A e C é ", angulo2_graus:2:2, "º; o ângulo entre B e C é ", angulo3_graus:2:2, "º")
Fimalgoritmo