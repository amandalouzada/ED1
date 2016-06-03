#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct no{
    char *valor;
    struct no *prox;
}no;

typedef struct lista{
    no *inicio, *fim;
}lista;

// bool listaVazia(lista l);
// void iniciarLista(lista *l);
// no *getNo(int x);
// void inserirLista(lista *l, int x);
// void imprimirLista(lista *l);
bool listaVazia(lista l){
    return (l.inicio == NULL) ? true : false;
}

void iniciarLista(lista *l){
    l->inicio = l->fim = NULL;
}

no *getNo(char * x){
    no *novo = (no*)malloc(sizeof(no));
    if(novo != NULL){
        novo->prox = NULL;
        novo->valor = x;
    }
    return novo;
}

void inserir(lista *l, char * x){
    no *novo = getNo(x);
    if(novo != NULL){
        if(listaVazia(*l))
            l->inicio = l->fim = novo;
        else
          printf("Não fiz");
            // inserirFim(l, novo);
    }
}




int main(){
    lista l;
    no * no;
    char  nome[50];
    FILE *arq;
    int result;
    char Str[50];

    arq = fopen("arquivo.txt", "rt");

    if (arq == NULL)
    {
        printf("Problemas na CRIACAO do arquivo\n");
        return;
    }
    /*
    printf("Nome: " );
    scanf("%s",nome );
    */

    iniciarLista(&l);
    inserir(&l,nome);

    no = getNo(nome);

    printf("No nome: %s\n",no->valor);


    ///TODO code here...
    return 0;
}
