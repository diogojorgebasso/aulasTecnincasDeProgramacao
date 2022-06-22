n = int(input())
m = int(input())
s = int(input())

possible_value = []
for x in range(n,m+1):
    soma = 0
    x_str = str(x)
    for y in range(0, len(x_str)):
        soma+=int(x_str[y])
    if soma == s:
        possible_value.append(x)

if len(possible_value) == 0:
    print("-1")
else:
    print(possible_value[-1])
