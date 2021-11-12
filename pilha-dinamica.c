#include <stdio.h>
#include <stdlib.h>
#include "pilha-dinamica.h"
void main(void){
    TPilhaEnc *p1 = (TPilhaEnc*) calloc(1,sizeof(TPilhaEnc));
    if (p1 == NULL){
        printf("erro de alocação\n");
        exit(0);
    }else{
        iniciar(p1);
        empilha(10,p1);
        empilha(20,p1);
        empilha(30,p1);
        printf("pilha original:\n");
        imprime(p1);
     }

    TPilhaEnc *p2 = (TPilhaEnc*) calloc(1,sizeof(TPilhaEnc));
    if (p2 == NULL){
        printf("erro de alocação\n");
        exit(0);
    }else{
        printf("pilha clonada:\n");
        iniciar(p2);
        clonar(p1,p2);
        imprime(p2);
    }
}

