n = 10000
soma = 5000
lista = [int(i) for i in range(0,10001)]
output = 0
for x in range(0, len(lista)):
    for y in range(x,len(lista)+1):
        s = sum(lista[x:y])
        if s == soma:
           output+=1
	if s>soma:
	   break
print(output)   



