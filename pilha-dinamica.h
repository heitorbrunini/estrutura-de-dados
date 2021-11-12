/*define a estrutura nó da nossa pilha
  dinâmica e ela em si*/
typedef struct no{
    struct no *prox;
    int value;
}Tno;
typedef struct pilha{
    Tno *top;
}TPilhaEnc;
/*inicia a pilha
  parâmetros: estrutura pilha*/
void iniciar(TPilhaEnc *plh) {
    plh->top = NULL;
}
/*adiciona termos ao topo da pilha
  parâmetros: dado a ser adicionado e
  a pilha que receberá o valor*/
void empilha(int dado, TPilhaEnc *p){
     Tno *novo = (Tno*) calloc(1,sizeof(Tno));
     if (novo==NULL){
        printf("erro ao alocar o no\n");
     }else{
        novo->value=dado;
        novo->prox = p->top;
        p->top=novo;
     };
}
/*remove o termo do topo da pilha
  parametros: a pilha que */
int desempilha (TPilhaEnc *p){
    /*apontamos para o topo da nossa pilha e criamos
      um dado para armazenar oq será removido*/
    Tno *aux = p->top;
    int dado;
    //se a pilha estiver vazia não há oq remover
    if (p==NULL){
        printf("pilha vazia\n");
        return 0;
    }else{
        //volta um termo para o topo
        p->top=aux->prox;
        //corta o nó do ex topo
        aux->prox=NULL;
        //armazena o dado e livra o auxiliar
        dado = aux->value;
        free(aux);
        return dado;
    }
}
/*função imprime, usada para imprimir a pilha
  parametro: a pilha a ser imprimida*/
void imprime (TPilhaEnc *p){
    //cria um auxiliar apontando pro topo da pilha
    Tno *aux = p->top;
    //se a pilha estiver vazia não há oq imprimir
    if (aux== NULL){
        printf("pilha vazia\n");
    }else{
        while (aux!=NULL){
            //imprime o valor do topo e desce o auxiliar da pilha
            printf("%d ",aux->value);
            aux = aux->prox;
        }
        printf("\n");
    }
}
/*função clone: recebe uma piha vazia e outra não,
  transforma a pilha vazia na semelhança da outra*/
int clonar (TPilhaEnc *origem, TPilhaEnc *destino){
    //cria uma pilha que será o resultado da primeira invertida
    TPilhaEnc *AUX = (TPilhaEnc*) calloc(1,sizeof(TPilhaEnc)); iniciar(AUX);
    Tno *aux = origem->top;
    //se a pilha de origem tiver vazia não há oq clonar
    if (aux ==NULL){
        printf("pilha vazia\n");
        return 1;
    };
    //soma os termos da primeira (de forma invertida)
    while (aux!=NULL){
        empilha(aux->value,AUX);
        aux=aux->prox;
    }
    aux = AUX->top;
    //adiciona os termos da pilha auxiliar a pilha que deve ser a cópia
    while (aux!=NULL){
        empilha(aux->value,destino);
        aux=aux->prox;
    }
    return 0;
}
