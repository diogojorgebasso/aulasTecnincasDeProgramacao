numero_de_variaveis = int(input())
opcaoOperacaoBooleana = str(input("Queres digitar a opção booleana? [S/N] Caso N, o algoritmo achará a FND dos valores digitados"))[0].upper()
if opcaoOperacaoBooleana=="S":
  opercao = str(input("Digite a operção, por favor"))
matriz = []
for _ in range(2**numero_de_variaveis):
  ultima_linha = [int(i) for i in input().split()]
  matriz.append(entradas)
print("Valores digitados:")
alfabeto = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
for i in range(0,numero_de_variaveis):
  print(alfabeto[i].upper(), end=" ")
print("S", end=" ")
fnd = ""
for listasIndividuais in matriz:
  for index, a in enumerate(listasIndividuais):
    print(index)
    print(a," |", end="")
    if a==0:
      fnd+="~",alfabeto[index],"∧"
    elif a==1:
      fnd+=alfabeto[index],"∧"
    if (index+1==numero_de_variaveis):
      if (a==1):
        fnd+="∨"
      else:
        fnd=""
  print("-"*5)
print(fnd)
