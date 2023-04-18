#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct no{
    short int numero;
    char naipe;
    struct no *prox;
}tCarta;

tCarta *primMesa[8]= {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};
tCarta *primNaipe[4]= {NULL, NULL, NULL, NULL};
tCarta *temp[4]= {NULL, NULL, NULL, NULL};
tCarta *primMonte= NULL;

void gerarBaralho(){
    int i, j;
    tCarta *novo = NULL;

    for(i=3; i<=6; i++){
        for(j=13; j>=1; j--){
            novo = (tCarta*) malloc (sizeof(tCarta));
            novo -> naipe = i;
            novo -> numero = j;
            novo -> prox = primMonte;
            primMonte = novo;
        }
    }
}

void destroiBaralho(){
    tCarta *apaga, *atual= primMonte;

    while(atual != NULL){
        apaga = atual;
        atual= atual->prox;
        free(apaga);
    }
}

void embaralhaBaralho(){
    srand(time(NULL));
    tCarta *atual, *aux;
    int sorteio, i, j;

    for(i=0;i<(52*4);i++){
        aux= NULL;
        atual= primMonte;
        sorteio = rand()%52;
        for(j = 0; j < sorteio; j++){
            aux=atual;
            atual=atual->prox;
        }
        if(sorteio > 0){
            aux->prox=atual->prox;
            atual->prox=primMonte;
            primMonte=atual;
        }
        else{
            continue;
        }
    }
}

void distribuirMesa(){
    int i, j;
    tCarta *atual;

    for(i=0;i<8; i++){
        if(i<4){
            for(j=1; j<=7; j++){
                atual= primMonte;
                primMonte = primMonte->prox;
                atual->prox = primMesa[i];
                primMesa[i] = atual;
            }
        }else{
            for(j=1; j<=6; j++){
                atual= primMonte;
                primMonte = primMonte->prox;
                atual->prox = primMesa[i];
                primMesa[i] = atual;
            }
        }
    }
}

void imprime(){
    tCarta *atual;
    int i;
    printf("\n[TEMP]= ");
    for(i=0; i<4; i++){
        if(temp[i] != NULL)
            printf(" %d-[%02d/%c] ", i, temp[i]->numero, temp[i]->naipe);
        else{
            printf(" %d-[    ] ", i);
        }
    }
    printf("\n\n");
    for(i=0; i<4; i++){ 
        atual = primNaipe[i];
        printf("[NAIPE %d]=", i);
        while(atual != NULL){
            printf("[%02d/%c]", atual->numero, atual->naipe);
            atual= atual->prox;
        }
        putchar('\n');
    }
    putchar('\n');
    for(i=0; i<8; i++){ 
        atual = primMesa[i];
        printf("[MESA %d]=", i);
        while(atual != NULL){
            printf("[%02d/%c]", atual->numero, atual->naipe);
            atual= atual->prox;
        }// end while
        putchar('\n');
    }// end for
}

int posicaoTemp(){ 
    int i;
    for(i=0; i<4; i++){
        if(temp[i]==NULL)
            return i;
    }
    return -1;
}

void moveMesaTemp(){
    tCarta *aux = NULL;
    tCarta *atual;
    int mesa;

    if(posicaoTemp() != -1){
        printf("Em qual mesa esta a carta que voce deseja mover?\n");
        scanf("%d", &mesa);
        atual = primMesa[mesa];
        if(primMesa[mesa] == NULL){
            printf("A mesa esta vazia!\n");
        }else{
            while(atual->prox != NULL){
                aux = atual;
                atual= atual->prox;
            }
            temp[posicaoTemp()] = atual;
            if(atual == primMesa[mesa]){
                primMesa[mesa] = NULL;
            }else{
                aux->prox = NULL;
            }
        }
    }else{
        printf("O temporario esta cheio!\n");
    }
}

bool corDiferente(char naipe1, char naipe2){ 
    return (naipe1-naipe2==1);
}

void moveTempMesa(){
    tCarta *aux = NULL;
    tCarta *atual;
    int temporario, mesa;

    if(posicaoTemp() == 0){
        printf("O temporario esta vazio!\n");
    }else{
        printf("Qual posicao do temporario a carta se encontra?\n");
        scanf("%d", &temporario);
        printf("Voce deseja mover a carta para qual mesa?\n");
        scanf("%d", &mesa);
        if(primMesa[mesa] == NULL){
            primMesa[mesa] = temp[temporario];
            primMesa[mesa]->prox = NULL;
            temp[temporario] = NULL;
        }else{
            atual= primMesa[mesa];
            while(atual != NULL){
                aux= atual;
                atual= atual->prox;
            }
            if(((aux->numero) == (temp[temporario]->numero)+1) && (corDiferente(aux->naipe, temp[temporario]->naipe) == true)){
                    aux->prox = temp[temporario];
                    aux->prox->prox = NULL;
                    temp[temporario] = NULL;
            }else{
                if(aux->numero == 1){
                    printf("A mesa esta cheia, alem disso, a cor deve ser diferente e um numero menor que a carta da mesa!\n");
                }else{
                    printf("A cor deve ser diferente e um numero menor que a carta da mesa!\n");
                }
            }
        }
    }
}

void moveMesaNaipe(){
    tCarta *auxNaipe= NULL;
    tCarta *auxMesa[2] = {NULL, NULL};
    tCarta *atual;
    tCarta *atual2;
    int mesa, naipe;

    printf("Me diga em qual mesa esta a carta.\n");
    scanf("%d", &mesa);
    printf("Para qual pilha de naipes voce deseja mover a carta?\n");
    scanf("%d", &naipe);
    atual = primNaipe[naipe];
    atual2 = primMesa[mesa];
    if(primMesa[mesa] == NULL){
        printf("A mesa esta vazia!\n");
    }else{
        if(atual == NULL){
            auxNaipe = primNaipe[naipe];
        }else{
            while(atual != NULL){
                auxNaipe= atual;
                atual = atual->prox;
            }
        }
        if(atual2 == NULL)
            auxMesa[1] = primMesa[mesa];
        else{
            while(atual2 != NULL){
                auxMesa[0] = auxMesa[1];
                auxMesa[1] = atual2;
                atual2 = atual2->prox;
            }
        }
        if(primNaipe[naipe] == NULL){
            if(auxMesa[1]->numero == 1){
                primNaipe[naipe] = auxMesa[1];
                auxMesa[1]->prox = NULL;
                if(auxMesa[1] == primMesa[mesa]){
                    primMesa[mesa] = NULL;
                }else{
                    auxMesa[0]->prox = NULL;
                }
            }else
                printf("A primeira carta da pilha precisa ser um as.\n");
        }else{
            if((auxNaipe->numero == ((auxMesa[1]->numero)-1)) && (auxNaipe->naipe) == (auxMesa[1]->naipe)){
                auxNaipe->prox = auxMesa[1];
                auxMesa[1]->prox = NULL;
                if(auxMesa[1] == primMesa[mesa]){
                    primMesa[mesa] = NULL;
                }else{
                    auxMesa[0]->prox = NULL;
                }
            }else{
                if(auxNaipe->numero == 13){
                    printf("O naipe esta cheio, alem disso, o posicionamento das cartas precisam seguir ordem crescente e do mesmo naipe!\n");
                }else{
                    printf("O posicionamento das cartas precisam seguir ordem crescente e do mesmo naipe\n");
                }
            }
        }
    }
}

void moveNaipeTemp(){
    int posicaoNaipe;
    tCarta *atual, *ant;

    printf("Qual naipe?\n");
    scanf("%d", &posicaoNaipe);
    atual = primNaipe[posicaoNaipe];
    if(atual == NULL){
        printf("O naipe esta vazio!\n");
    }
    while(atual!=NULL){
        if(atual->prox == NULL){
            if((atual->numero == 1) && (posicaoTemp() != -1)){
                primNaipe[posicaoNaipe] = NULL;
            }
            break;
        }
        ant = atual;
        atual = atual->prox;
    }
    if(posicaoTemp() != -1){
        ant->prox = NULL;
        temp[posicaoTemp()] = atual;
    }else{
        printf("Nao tem lugar no temporario!\n");
    }
}

void tempNaipe(void){
    tCarta *atual, *ant;
    int posicaoTemp, posicaoNaipe;

    do{
        printf("Temp: ");
        scanf("%d", &posicaoTemp);
    }while((posicaoTemp < 0) || (posicaoTemp > 3));
    do{
        printf("Naipe: ");
        scanf("%d", &posicaoNaipe);
    }while((posicaoNaipe < 0) || (posicaoNaipe > 3));
    
    if(temp[posicaoTemp] != NULL){
        //Verificação de pilha de naipes vazia
        if(primNaipe[posicaoNaipe] == NULL){
            //Se a pilha de naipes estiver vazia, apenas um Ás pode ser inserido
            if(temp[posicaoTemp]->numero == 1){
                primNaipe[posicaoNaipe] = (tCarta *)malloc(sizeof(tCarta));
                primNaipe[posicaoNaipe] = temp[posicaoTemp];
                temp[posicaoTemp] = NULL;
            }else{
                printf("A primeira carta deve ser um As (1)...");
            }
        }else{
            //Encontrando o ultimo elemento da pilha de naipes indicada
            ant = NULL;
            atual = primNaipe[posicaoNaipe];
            while(atual->prox != NULL){
                atual = atual->prox;
            }
            //Validação da sequência de inserção na pilha
            if((temp[posicaoTemp]->numero-1) == atual->numero){
                //Validação do naipe da pilha
                if(temp[posicaoTemp]->naipe == atual->naipe){
                    atual->prox = temp[posicaoTemp];
                    temp[posicaoTemp] = NULL;
                }else{
                    printf("A carta do temporario deve possuir o mesmo naipe da pilha de naipes...");
                }
            }else{
                printf("A carta do temporario deve ser a subsequente posterior da pilha de naipes...");
            }
        }
    }else{
        printf("Temp vazio...");
    }
}

void naipeMesa(){
    int posMesa, posNaipe;
    tCarta *atualMesa, *antMesa, *atualNaipe, *antNaipe;

    do{
        printf("Naipe: ");
        scanf("%d", &posNaipe);
    }while((posNaipe < 0) || (posNaipe > 3));

    if(primNaipe[posNaipe] != NULL){
        //Encontrando o ultimo elemento da pilha de naipes indicada
        antNaipe = NULL;
        atualNaipe = primNaipe[posNaipe];
        while(atualNaipe->prox != NULL){
            antNaipe = atualNaipe;
            atualNaipe = atualNaipe->prox;
        }
        
        do{
            printf("Mesa: ");
            scanf("%d", &posMesa);
        }while((posMesa < 0) || (posMesa > 7));

        //Encontrando o ultimo elemento da mesa indicada
        antMesa = NULL;
        atualMesa = NULL;
        if(primMesa[posMesa] != NULL){
            atualMesa = primMesa[posMesa];
            //Atual = Ultima carta da mesa
            while(atualMesa->prox != NULL){
                antMesa = atualMesa;
                atualMesa = atualMesa->prox;
            }
        }
        
        if((atualMesa == NULL) || (atualMesa->numero == (atualNaipe->numero + 1))){
            //Passando a carta do naipe p/ mesa indicada
            tCarta *novo = (tCarta *)malloc(sizeof(tCarta));
            novo->naipe = atualNaipe->naipe;
            novo->numero = atualNaipe->numero;
            novo->prox = NULL;

            if(atualMesa != NULL){
                //Verificação dos requisitos
                if(((atualMesa->naipe <= 4) && (atualNaipe->naipe > 4)) || ((atualMesa->naipe > 4) && (atualNaipe->naipe <= 4))){
                    atualMesa->prox = novo;
                    if(antNaipe != NULL){
                        antNaipe->prox= NULL;
                    }else{
                        primNaipe[posNaipe] = NULL;
                    }
                }else{
                    printf("Cartas da mesma cor");
                }
            }else{
                primMesa[posMesa] = (tCarta *)malloc(sizeof(tCarta));
                primMesa[posMesa] = novo;
                if(antNaipe != NULL){
                    antNaipe->prox= NULL;
                }else{
                    primNaipe[posNaipe] = NULL;
                }
            }
            
        }else{
            printf("A carta da mesa deve ser a proxima subsequente...");
        }
    }else{
        printf("Indice NAIPE vazio...");
    }
}


void moveMesaMesa(){
    int posMesa1, posMesa2;
    char enviarGp;
    tCarta *atualMesaSaida, *antMesaSaida, *atualMesaEntrada, *antMesaEntrada, *aux;
    bool seqValida = true;

    aux = NULL;

    do{
        printf("Mesa origem: ");
        scanf("%d", &posMesa1);
    }while((posMesa1 < 0) || (posMesa1 > 7));

    if(primMesa[posMesa1] != NULL){
        do{
            printf("Mesa destino: ");
            scanf("%d", &posMesa2);
        }while((posMesa2 < 0) || (posMesa2 > 7));

        do{
            printf("Grupo de cartas?");
            scanf(" %c", &enviarGp);
            getchar();
        }while((enviarGp != 's') && (enviarGp != 'n'));

        antMesaSaida = NULL;
        atualMesaSaida = primMesa[posMesa1];

        if(enviarGp == 's'){
            do{ //enquanto a sequencia for invalida, ele roda toda a lista para ver as condicoes.
                if(!seqValida){
                    antMesaSaida = atualMesaSaida;
                    atualMesaSaida = atualMesaSaida->prox;
                }

                seqValida = true; //considera como verdade
                aux = atualMesaSaida;
                while(aux->prox != NULL){
                    if((aux->prox->numero != aux->numero-1) || (((aux->prox->naipe <= 4) && (aux->naipe <= 4)) || ((aux->prox->naipe > 4) && (aux->naipe > 4)))){ 
                        seqValida = false; // se não satisfazer os critérios
                        break;
                    }
                    aux = aux->prox;
                }
            }while(!(seqValida) && (atualMesaSaida->prox != NULL));

            if(!seqValida){ //a sequencia é, depois de rodada, de fato, invalida.
                printf("Sequencia invalida...\n");
                return;
            }
        }else{
            while(atualMesaSaida->prox != NULL){ //não envia o grupo, apenas a última carta.
                antMesaSaida = atualMesaSaida;
                atualMesaSaida = atualMesaSaida->prox; //roda até o ultimo
            }
        }

        //caso análogo para checar a mesa de entrada
        antMesaEntrada = NULL;
        atualMesaEntrada = NULL;
        if(primMesa[posMesa2] != NULL){ //se mesa existe
            atualMesaEntrada = primMesa[posMesa2];
            while(atualMesaEntrada->prox != NULL){
                antMesaEntrada = atualMesaEntrada;
                atualMesaEntrada = atualMesaEntrada->prox;
            }
        }
        
        if(atualMesaEntrada != NULL){//atualiza os ponteiros
            while ((atualMesaSaida->numero >= atualMesaEntrada->numero) && (atualMesaSaida->prox != NULL)){
                antMesaSaida = atualMesaSaida;
                atualMesaSaida = atualMesaSaida->prox;
            }
        }

        if((atualMesaEntrada == NULL) || (atualMesaEntrada->numero == (atualMesaSaida->numero + 1))){ //checa se o números de saida é igual ao da entrada mais um 
            tCarta *novo = (tCarta *)malloc(sizeof(tCarta));
            novo = atualMesaSaida;

            if(atualMesaEntrada != NULL){
                    atualMesaEntrada->prox = novo;
                    if(antMesaSaida != NULL){
                        antMesaSaida->prox= NULL;
                    }else{
                        primMesa[posMesa1] = NULL;
                    }
            }else{ //aloca e atualiza ponteiros
                primMesa[posMesa2] = (tCarta *)malloc(sizeof(tCarta));
                primMesa[posMesa2] = novo;
                if(antMesaSaida != NULL){
                    antMesaSaida->prox= NULL;
                }else{
                    primMesa[posMesa1] = NULL;
                }
            }
            
        }else{
            printf("ERRO...");
        }
    }else{
        printf("Mesa de origem vazia");
    }
}

void menu(void){
    int op=0;
    while(op!=4){
        imprime();
        putchar('\n');
        printf("(1)Move Mesa-Naipe\n");
        printf("(2)Move Mesa-Temp\n");
        printf("(3)Move Temp-Mesa\n");
        printf("(4)Sair\n");
        printf("(5)Move Naipe-Temp\n");
        printf("(6)Move Temp-Naipe\n");
        printf("(7)Move Mesa-Mesa\n");
        printf("Opcao: ");
        scanf("%d", &op);
        getchar();
        switch(op){
            case 1:
                moveMesaNaipe();
                break;
            case 2:
                moveMesaTemp();
                break;
            case 3:
                moveTempMesa();
                break;
            case 4:
                printf("Programa Finalizado.\n");
                break;
            case 5:
                moveNaipeTemp();
                break;
            case 6:
                tempNaipe();
                break;
            case 7:
                moveMesaMesa();
                break;
            default:
                printf("Opcao Invalida.\n");
                break;
        }
    }
}

int main(int argc, char *argv[]){
    srand(time(NULL)); //seed aleatoria
    gerarBaralho();
    embaralhaBaralho();
    distribuirMesa();
    menu();
    destroiBaralho();
    return 0;
}
