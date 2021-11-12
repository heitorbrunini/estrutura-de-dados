    //definindo a estrutura de um circulo
typedef struct c{
    char nome[10];
    float eixoX;
    float eixoY;
    float raio;
}Circulo;
//calcular distância
float dist(float x1,float x2, float y1, float y2){
    float calcular = pow((x1-x2),2.0) + pow((y1-y2),2.0);
    calcular = sqrt(calcular);
    return calcular;
}
//função CriaCirculo, retorna um ponteiro estrutura do tipo circulo, que defininmos anteriormente
Circulo* criaCirculo(char *N, float X,float Y, float R){
    Circulo *oCirculo=(Circulo*)calloc(1,sizeof(Circulo));

    strcpy(oCirculo->nome, N);
    oCirculo->eixoX=X;
    oCirculo->eixoY=Y;
    oCirculo->raio=R;

    return oCirculo;
}
//função para saber se um circulo 1 contém ou não um circulo 2
int contem(Circulo *c1,Circulo *c2){
    float distancia=dist(c1->eixoX,c2->eixoX,c1->eixoY,c2->eixoY);
    if (c1->raio>=c2->raio){
        float distanciamax = c1->raio - c2->raio;
        if (distancia<=distanciamax)
        {
            return 0;
        }else{
            return 1;
        };
    }else{
        return 1;
    };

};

