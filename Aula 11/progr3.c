int main(int argc, char *argv[]){
    float total =0.0, salario=1;
    while (salario>0){
        printf("Digite o salário = ");
        scanf("%f", &salario);
        total += salario;
    }
    printf("Soma é %f", total);
    return 0;
}
