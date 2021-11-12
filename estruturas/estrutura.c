#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "bib.h"

int main (void){
    dados *ponteiro = (dados*)calloc(1,sizeof(dados));

    printf("insira seu nome: ");
    scanf("%s",&(*ponteiro).nome);

    printf("insira sua idade: ");
    scanf("%i",&(*ponteiro).idade);

    printf("insira sua altura: ");
    scanf("%f",&(*ponteiro).altura);

    printf("\nnome: %s \nidade: %i \naltura: %.2f \n",(*ponteiro).nome,(*ponteiro).idade,(*ponteiro).altura);
};
//strcpy(heitor.nome, "heitor");
