
/*****************************************************************************
 * Instituto Federal de Educação Ciência e Tecnologia da Paraíba
 * Campus Campina Grande
 * Curso Superior em Engenharia da Computação
 * Professor: Cesar Vasconcelos
 *
 * Copyright - Cesar Vasconcelos
 * Este marerial foi elaborado apenas para ser utilizado pelos alunos da
 * disciplina Estruturas de Dados, do curso de Eng. da Computação do IFPB.
 *
 * Nenhuma parte deste material pode ser reproduzida ou transmitida
 * de qualquer modo ou por qualquer meio sem prévia autorização do
 * autor e sem lhe ser dado o devido crédito.
 * **************************************************************************/


//*************** Implementação da área de dados do TAD ***************//

// definição da estrutura lista duplamente encadeada
typedef struct nolista {
	int dado;  			   // campo que guarda a informação
    struct nolista *prox;  // guarda o endereço para prox nó
    struct nolista *ant;   // guarda o endereço para nó anterior
}no;

typedef no* TListaDupEnc;

//************ A interface de uso do TAD Lista Dup. Encadeada *********//

/* Procedimento para criar uma lista vazia */
void criarLista( TListaDupEnc *lista );

/* Função para verificar se a lista está vazia ou nó */
int listaVazia( TListaDupEnc lista );

/* Função para verificar a quantidade de elementos na lista */
int tamanhoLista( TListaDupEnc lista );

/* Função para buscar um elemento mediante sua posição dentro da lista */
int elementoNaPosicao( TListaDupEnc lista, int posicao, int* dado );

/* Função para buscar a posição de um elemento na lista */
int posicaoDoElemento( TListaDupEnc lista, int dado );

/* Função para inserir um elemento na lista mediante sua posição */
int inserirElemento( TListaDupEnc* lista, int posicao, int dado );

/* Função para remover um elemento da lista mediante sua posição */
int removerElemento( TListaDupEnc* lista, int posicao, int *dado );

/* Procedimento para exibir todos os elementos da lista */
void imprimir ( TListaDupEnc lista );

int remove_inicio( TListaDupEnc* lista, int *dado );

int remove_ultimo( TListaDupEnc* lista, int *dado );

int inserirComc( TListaDupEnc* lista, int dado );

int inserirFim( TListaDupEnc* lista, int dado );

int TermoOcorre( TListaDupEnc* lista, int ocorre);

TListaDupEnc* merge(TListaDupEnc *lista1, TListaDupEnc *lista2 );




