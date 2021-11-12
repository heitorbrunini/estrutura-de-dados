#include <stdio.h>
#include <stdlib.h>

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

void remover_primeiro(membro_lista *gancho){
    membro_lista *aux=NULL;
    aux=*gancho;
    aux->proximo->anterior = NULL;
    free(aux);
};
int main(void){
    membro_lista m1,m2,m3 , n1,n2,n3;
    membro_lista *gancho=&m1;

    m1.valor=10;
    m2.valor=20;
    m3.valor=30;

    m1.proximo=&m2;
    m2.proximo=&m3;
    m3.proximo=(membro_lista *)0;

    m1.anterior=(membro_lista *)0;
    m2.anterior=&m1;
    m3.anterior=&m2;

    print(gancho);
    return 0;
};
