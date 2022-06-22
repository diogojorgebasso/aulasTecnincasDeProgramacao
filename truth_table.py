numero_de_variaveis = int(input())
matriz = []
for _ in range(2**numero_de_variaveis):
  entradas = [int(i) for i in input().split()]
  matriz.append(entradas)
for x in matriz:
  for a in x:
    print(a) 
