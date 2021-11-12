
typedef struct lista{
    int valor;
    struct lista *anterior;
    struct lista *proximo;
}membro_lista;


void print (membro_lista *gancho){
    while (gancho!=(membro_lista *)0){
        printf("valor %i\n",gancho->valor);
        gancho=gancho->proximo;
    };
}

int tamanhoLista( membro_lista *lista ){
	int tamanho = 0;
	while( lista != NULL ) {
    	lista = lista->proximo;
        tamanho++;
    }
    return tamanho;
}


