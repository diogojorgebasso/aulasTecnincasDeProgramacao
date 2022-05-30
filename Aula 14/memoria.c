#include <stdio.h>
#include <stdio.h>
#include<time.h>
void red() {
  printf("\033[1;31m");

}
void reset () {
  printf("\033[0m");
}
void green() {
  printf("\033[0;32m");
}
void blue() {
  printf("\033[0;34m");
}
int main(int argc, char *argv){
    char gabarito[6][6], visual[6][6];
    int i,j, l1, c1, l2, c2;
    int jogadas=0, jogador1=0, jogador2;
    int jogador=1;
    char njog1[10], njog2[10], opt;
    srand(time(NULL)); //inicializa o tempo aleatório
    printf("Digite o nome do jogador 1: ");
    scanf("%s", njog1);
    printf("Digite o nome do jogador 2: ");
    scanf("%s", njog2);
    printf("Desejas roubar?");
    getchar();
    scanf("%c", &opt);
   for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            gabarito[i][j] = ' ';
            visual[i][j] = ' ';
        }
    }

    //preencher a matriz
    for(i=0; i<18; i++){
        l1 = rand()%6;
        c1 = rand()%6;
        l2 = rand()%6;
        c2 = rand()%6;
        if(!((l1==l2 && c1==c2)) &&
        (gabarito[l1][c1]==' ') &&
        (gabarito[l2][c2]==' ')){
            //adiciona a letra para o dado elemento
            gabarito[l1][c1] = 'a'+i;
            gabarito[l2][c2]='a'+i;
        }
        else{
            i--;
        }
    }

    if(opt=="S"){
        for(i=0; i<6; i++){
            for(j=0; j<6; j++){
                printf("[%c]", gabarito[i][j]);
            }
        printf("\n");
        }
    }
    else{
        printf("A integridade compensa.\n");
    }

    //MAIN jogadas
    while(jogadas<18){
        printf("   0 1  2  3  4  5 \n");
        for(i=0; i<6; i++){
            printf("%d", i);
            for(j=0; j<6;j++){
                printf("[%c]", visual[i][j]);
            }
            printf("\n");
        }
        printf("PLACAR: %s = %d; %s =%d\n", njog1, jogador1, njog2, jogador2);
        // Format print based on name
        if (jogador==1){
            printf("(%s) [lin1 col1 lin2 col2]:", njog1);
        }
        else{
            printf("(%s) [lin1 col1 lin2 col2]:", njog2);

        }
        scanf("%d %d %d %d", &l1, &c1, &l2, &c2);

        //verificação de limites da matriz
        if(
        l1>=0 && l1<6 &&
        l2>=0 && l2<6 &&
        c1>=0 && c1<6 &&
        c2>=0 && c2<6 &&
        !(l1 == l2 && c1==c2)
        ){
            if((visual[l1][l2] == ' ') && (visual[l2][c2]==' ')){
                visual[l1][c1] = gabarito[l1][c1];
                visual[l2][c2] = gabarito[l2][c2];

                //impressão da matriz visual
                printf("   0  1  2  3  4  5\n");
                for(i=0; i<6; i++){
                    printf("%d", i);
                    for(j=0; j<6; j++){
                        printf("[%c]", visual[i][j]);
                    }
                    printf("\n");
                }

                //verificação se as letras são iguais
                if(gabarito[l1][c1] == gabarito[l2][c2]){
                    jogadas++;
                    green();
                    printf("Parabéns! As letras são iguais!\n");
                    reset();
                    if(jogador == 1){
                        jogador1+=2;
                    }
                    else{
                        jogador2+=2;
                    }
                }
                else{
                    blue();
                    printf("As letras são diferentes \n");
                    reset();
                    visual[l1][c1] = ' ';
                    visual[l2][c2] = ' ';
                }
                //passa a vez para o outro jogador
                if(jogador == 1){
                    jogador =2;
                }
                else{
                    jogador =1;
                }
            }
            else{
                printf("Jogue novamente.");
                printf("Uma das letras já foi descoberta\n\n");
            }

        }
        else{
            red();
            printf("As coordenadas são inválidas! Digite novamente...\n");
            reset();
        }

    }

    if(jogador1==jogador2){
        printf("Empate \n");
    }
    else{
        if(jogador1 < jogador2){
            printf("Jogador 2 venceu.");
        }
        else{
            printf("Jogador 1 venceu.");
        }
    }
    return 0;
}
