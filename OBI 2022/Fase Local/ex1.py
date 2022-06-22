n = int(input())
soma = int(input())
lista = [int(i) for i in input().split()]
output = 0
for x in range(0, len(lista)):
    for y in range(x,len(lista)+1):
        if sum(lista[x:y]) == soma:
            output+=1
print(output)
