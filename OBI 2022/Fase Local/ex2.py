diaria = int(input())
aumento_diaria = int(input())
dia_chegada = int(input())
if (dia_chegada <= 15):
    diaria_promo = diaria+((dia_chegada-1)*aumento_diaria)
    print((31-dia_chegada+1)*diaria_promo)
else:
    diaria_promo = diaria+((14)*aumento_diaria)
    print((31-dia_chegada+1)*diaria_promo)
