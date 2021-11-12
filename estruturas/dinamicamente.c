#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
typedef struct c{
    int X;
    int Y;
}hei;

int main (void){
    hei *variavel=(hei*)malloc(sizeof(hei));
    variavel->X=10;
    variavel->Y=40;
    printf("o X é %d\no Y é %d",(*variavel).X,variavel->Y);
}
