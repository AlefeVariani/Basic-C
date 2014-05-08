#include <stdio.h>
#include <stdlib.h>

/**
* @author: Alefe Variani <alefevariani@unochapeco.edu.br>
*
* Obs: problema com o tipo char, lista apenas o primeiro caractere
*/

typedef struct dado {
    char nome;
    char endereco;
    int telefone;
    struct dado * proximo;
} Dado;

int main() {
    Dado *inicio_dado;
    Dado *proximo_dado;
    int continuar;

    inicio_dado = (Dado *)malloc(sizeof(Dado));

    proximo_dado = inicio_dado;

     while (2) {
        printf("\nInforme Nome: \n");
        scanf("%s", &proximo_dado->nome);

        printf("\nInforma Telefone: \n");
        scanf("%d", &proximo_dado->telefone);

        printf("\nInforma Endereco: \n");
        scanf("%s", &proximo_dado->endereco);

        printf("\n**Deseja continuar: **\nDigite 2: Adiciona novo elemento na Lista. \nDigite 1: Mostrar Lista.\n");
        scanf("%d", &continuar);

        if (continuar == 2){
            proximo_dado->proximo = (Dado *)malloc(sizeof(Dado));
            proximo_dado = proximo_dado->proximo;
        } else {
            break;
        }
    }

    printf("\n");
    proximo_dado->proximo = NULL;
    proximo_dado = inicio_dado;
    while(proximo_dado != NULL){
        printf("Dados da Agenda\n");
        printf("============================================================\n");
        printf(" Nome: %c \n Telefone: %d \n Endereco: %c \n", proximo_dado->nome, proximo_dado->telefone, proximo_dado->endereco);
        printf("============================================================\n");
        proximo_dado = proximo_dado->proximo;
    }
    return 0;
}
