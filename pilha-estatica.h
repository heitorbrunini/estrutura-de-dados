typedef struct pil{
    int lista [MAX];
    int top;
}Tpilha;

int criapilha(Tpilha *pilha){
    pilha->top==-1;
}
int pilhavazia(Tpilha *pilha){
    if (pilha->top==-1){
        return 1;
    }else{return 0;}
}
int pilhacheia(Tpilha *pilha){
    if (pilha->top==99){
        return true;
    }else{return false;}
}
void addpilha(Tpilha *pilha, int valor){
    if (pilhacheia(pilha)){
        printf("erro, pilhacheia\n");
    }else{
        pilha->top+=1
        pilha->lista[top]==valor
    }
}
void removerpilha(Tpilha *pilha){
    if (pilhavazia(pilha)==1){
        print("erro, pilhavazia\n")
    }else{
        aux=pilha->lista[top]
        pilha->top-=1
    }
}

