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
    char  nome[50], nomeNo[50];
    FILE *arq;
    int i, resto, size;
    int x;
    char str[] = "amanda";


    printf("Digite o numero de caracteres do indice: ");
    scanf("%d", &i);


    arq = fopen("arquivo.txt", "rt");

    if (arq == NULL)
    {
        printf("Problemas na CRIACAO do arquivo\n");
    }

    while (!feof(arq))
    {
  	   if (fgets(nome, 50 ,arq)){
         //RECEBE O TAMANHO DA PALAVRA
          size = (strlen(nome)-1);
        //RECEBE O RESTO DA DIVISAO
          resto = size%i;
          x=0;
          do
          {
              strncpy(nomeNo, nome+x, i);
              printf("Nome: %s\n", nomeNo );
              x++;
          } while(x<size-(i-resto));
       }
       printf("\n");
    }
    fclose(arq);

    iniciarLista(&l);
    inserir(&l,nome);

    no = getNo(nome);



    ///TODO code here...
    return 0;
}
