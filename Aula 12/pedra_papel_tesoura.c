#include <stdlib.h>
#include<time.h>
#include<stdio.h>
int main(int argc, char *argv[]){
    int sorteio, soma=0;
    char computador, usuario, resp, opt='s';
    do{
        srand(time(NULL));
        soma++;
        printf("(r)ocha, (p)apel, (t)esoura, (l)agarto, (s)pock\n");
        printf("Escolha = ");
        scanf("%c", &usuario);
        getchar();
        sorteio = rand()%5;
        switch(sorteio){
            case 0:
                switch(usuario){
                    case 'r':
                        printf("Usuário escolhe rocha\n");
                        printf("Computador escolhe rocha\n");
                        printf("Empatou, cumpade\n");
                        break;
                    case 'p':
                        printf("Usuário escolhe papel\n");
                        printf("Computador escolhe rocha\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 't':
                        printf("Usuário escolhe tesoura\n");
                        printf("Computador escolhe rocha\n");
                        printf("Perdeu, cumpade\n");
                        break;
                    case 's':
                        printf("Usuário escolhe spock");
                        printf("Computador escolhe rocha\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 'l':
                        printf("Usuário escolhe lagarto");
                        printf("Computador escolhe rocha\n");
                        printf("Perdeu, cumpade\n");
                        break;
                }
                break;
            case 1:
                switch(usuario){
                    case 'r':
                        printf("Usuário escolhe rocha\n");
                        printf("Computador escolhe papel\n");
                        printf("Perdeu, cumpade\n");
                        break;
                    case 'p':
                        printf("Usuário escolhe papel\n");
                        printf("Computador escolhe papel\n");
                        printf("Empatastes, cumpade\n");
                        break;
                    case 't':
                        printf("Usuário escolhe tesoura\n");
                        printf("Computador escolhe papel\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 's':
                        printf("Usuário escolhe spock");
                        printf("Computador escolhe papel\n");
                        printf("Perdeu, cumpade\n");
                        break;
                    case 'l':
                        printf("Usuário escolhe lagarto");
                        printf("Computador escolhe papel\n");
                        printf("Parabéns, cumpade\n");
                        break;
                }
                break;
            case 2:
                switch(usuario){
                    case 'r':
                        printf("Usuário escolhe rocha\n");
                        printf("Computador escolhe tesoura\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 'p':
                        printf("Usuário escolhe papel\n");
                        printf("Computador escolhe tesoura\n");
                        printf("Perdestes, cumpade\n");
                        break;
                    case 't':
                        printf("Usuário escolhe tesoura\n");
                        printf("Computador escolhe tesoura\n");
                        printf("Eampastes, cumpade\n");
                        break;
                    case 's':
                        printf("Usuário escolhe spock");
                        printf("Computador escolhe tesoura\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 'l':
                        printf("Usuário escolhe lagarto");
                        printf("Computador escolhe tesoura\n");
                        printf("Perdestes, cumpade\n");
                        break;
                }
                break;
            case 3:
                switch(usuario){
                    case 'r':
                        printf("Usuário escolhe rocha\n");
                        printf("Computador escolhe lagarto\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 'p':
                        printf("Usuário escolhe papel\n");
                        printf("Computador escolhe lagarto\n");
                        printf("Perdestes, cumpade\n");
                        break;
                    case 't':
                        printf("Usuário escolhe tesoura\n");
                        printf("Computador escolhe lagarto\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 's':
                        printf("Usuário escolhe spock");
                        printf("Computador escolhe lagarto\n");
                        printf("Perdestes, cumpade\n");
                        break;
                    case 'l':
                        printf("Usuário escolhe lagarto");
                        printf("Computador escolhe lagarto\n");
                        printf("Empatastes, cumpade\n");
                        break;
                }
                break;
            case 4:
                switch(usuario){
                    case 'r':
                        printf("Usuário escolhe rocha\n");
                        printf("Computador escolhe spock\n");
                        printf("Perdestes, cumpade\n");
                        break;
                    case 'p':
                        printf("Usuário escolhe papel\n");
                        printf("Computador escolhe spock\n");
                        printf("Parabéns, cumpade\n");
                        break;
                    case 't':
                        printf("Usuário escolhe tesoura\n");
                        printf("Computador escolhe spock\n");
                        printf("Perdestes, cumpade\n");
                        break;
                    case 's':
                        printf("Usuário escolhe spock");
                        printf("Computador escolhe spock\n");
                        printf("Empatastes, cumpade\n");
                        break;
                    case 'l':
                        printf("Usuário escolhe lagarto");
                        printf("Computador escolhe spock\n");
                        printf("Parabéns, cumpade\n");
                        break;
                }
                break;
        }
        printf("Desejas jogar novamente? [S/N] ");
        scanf("%c", &opt);
        getchar();
    }while(opt=='s');
    printf("O jogo foi rodado %d vezes", soma);
    return 0;
}
