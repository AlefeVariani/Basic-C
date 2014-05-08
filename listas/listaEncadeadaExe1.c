#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int v1, v2;
    struct nodo * proximo;
} Nodo;

int main() {
    Nodo *ini_nodo;
    Nodo *proximo_nodo;
    int flag_continuar;

    ini_nodo = (Nodo *)malloc(sizeof(Nodo));

    if(ini_nodo == NULL)
        exit(1);
    proximo_nodo = ini_nodo;

    while (1){
        printf("Digite o valor 1: ");
        scanf("%d", &proximo_nodo->v1);

        printf("Digite o valor 2: ");
        scanf("%d", &proximo_nodo->v2);

        printf("Deseja continuar Digite 1 para continuar e 0 para sair ");
        scanf("%d", &flag_continuar);

        if (flag_continuar == 1){
            proximo_nodo->proximo = (Nodo *)malloc(sizeof(Nodo));
            proximo_nodo = proximo_nodo->proximo;
        } else {
            break;
        }
    }

    printf("\n");
    proximo_nodo->proximo = NULL;
    proximo_nodo = ini_nodo;
    while(proximo_nodo != NULL){
        printf("Valor 1: %d, Valor 2: %d\n", proximo_nodo->v1, proximo_nodo->v2);
        proximo_nodo = proximo_nodo->proximo;
    }

    return 0;

}
