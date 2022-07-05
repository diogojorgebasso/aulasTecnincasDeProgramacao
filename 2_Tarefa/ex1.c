typedef struct {
    char nome[30],sexo[1];
    int cpf;
    float peso,altura
} dadosPessoa;

int main(int argc, char*argv[]){
    int i;
    int cpfBuscado;
    dadosPessoa pessoa;
    dadosPessoa pessoas[30];
    for(i=0; i<30; i++){
        printf("Digite o nome do cidadao n%d: ", i+1);
        scanf("%s", &pessoa.nome);
        printf("Digite o sexo [M/F/I]: ");
        scanf("%s", &pessoa.sexo);
        printf("Digite o CPF: ");
        scanf("%d", &pessoa.cpf);
        printf("Digite o peso: ");
        scanf("%f", &pessoa.peso);
        printf("Digite a altura: ");
        scanf("%f", &pessoa.altura);
        pessoas[i] = pessoa;
    }
    printf("Todos os usuarios e seus respectivos CPFs\n");
    for(i=0; i<30; i++){
        printf("%s .... %d\n", pessoas[i].nome, pessoas[i].cpf);
    }
    printf("Digite o CPF do caboco: ");
    scanf("%d", &cpfBuscado);
    for(i=0; i<30; i++){
        if(cpfBuscado==pessoas[i].cpf){
            printf("Pessoa encontrada!\n");
            printf("Nome: %s \n", pessoas[i].nome);
            printf("Sexo: %s \n", pessoas[i].sexo);
            printf("Peso: %f \n", pessoas[i].peso);
            printf("Altura: %f \n", pessoas[i].altura);
            printf("IMC: %f \n", pessoas[i].peso/pow(pessoas[i].altura, 2));
        }
    }
    return 0;
}
