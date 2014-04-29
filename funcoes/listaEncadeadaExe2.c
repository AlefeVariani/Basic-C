#include <stdio.h>
#include <stdlib.h>

typedef struct item {
    int Chave;
    /* outros componentes */
} Item;

typedef struct nodo {
    Item item;
    struct nodo *Prox;
} Nodo;

typedef struct lista {
    Nodo *Primeiro;
    Nodo *Ultimo;
} Lista;

Lista *lista;

void inicializa() {
    lista = (Lista *) malloc (sizeof (Lista));
    lista->Primeiro = (Nodo *) malloc (sizeof(Nodo));
    lista->Ultimo = lista->Primeiro;
    lista->Primeiro->Prox = NULL;
}

int esta_vazia() {
    return (lista->Primeiro == lista->Ultimo);
}

void insere_final(Item x) {
    lista->Ultimo->Prox = (Nodo *) malloc (sizeof(Nodo));
    lista->Ultimo = lista->Ultimo->Prox;
    lista->Ultimo->item = x;
    lista->Ultimo->Prox = NULL;
}

void imprime() {
    Nodo *aux;
    aux = lista->Primeiro->Prox;
    while (aux != NULL)
    {
        printf("%d\n", aux->item.Chave);
        aux = aux->Prox;
    }
}

int main() {
    Item item;
    inicializa();
    item.Chave = 1;
    insere_final(item);
    item.Chave = 2;
    insere_final(item);
    imprime();
    return 0;
}
