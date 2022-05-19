int main(int argc, char *argv[]){
    int tipo, preco;
    printf("1- caminhão \n2-carro \n3-moto \n");
    printf("Digite um tipo de combustível = ");
    scanf("%d", &tipo);
    printf("Digite o preço do combustível = ");
    scanf("%d", &preco);
    switch(tipo){
        case 1:
            printf("Imposto = 4%; %.2f", 1.04*preco);
            break;
        case 2:
            printf("Imposto = 2%; %.2f", 1.02*preco);
            break;
        case 3:
            printf("Imposto = 1%; %.2f", 1.01*preco);
            break;
        default:
            printf("Tipo de combustível desconhecido. Preço: %d", preco);
            break;
    }
    return 0;
}
