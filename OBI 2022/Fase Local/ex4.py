n = int(input())
matriz = [[]]
linha = 0
lista_correta = []
for a in range(0, n):
    lista = [int(i) for i in input().split()]
    matriz.append(lista)
    if 0 in lista:
        lista_correta = lista
        linha = a+1
    else:
        constante = sum(lista)

print(constante-sum(lista_correta))
print(linha)
print(lista_correta.index(0)+1)
