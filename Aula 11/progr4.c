
int main(int argc, char *argv[]){
    float total= 0.0, salario;
    do{
        printf("Digite o valor de salário = ");
        scanf("%f", &salario);
        total += salario;
    }while(salario>=0);
    printf("Somatório = %f\n", total);
    return 0;
}
