#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "bib-prova.h"

int main(void){
    Circulo *c1 , *c2, *c3;
    c1 = criaCirculo("Circulo01",3.0,4.0,2.0);
    c2 = criaCirculo("Circulo02",3.0,3.0,1.0);
    c3 = criaCirculo("Circulo03",1.0,5.0,1.0);
    printf("%d\n",contem(c1,c2));
    printf("%d\n",contem(c1,c3));
    free(c1);
    free(c2);
    free(c3);
    return 0;
};



