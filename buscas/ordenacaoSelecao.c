#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main()
{
    int vet[TAM], ordenado[TAM], i;

    for(i = 0; i < TAM; i++ ) {
        printf("INFORME VALOR PARA VETOR: ");
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < TAM; i++) {
        printf("VALORES %d\n", vet[i]);
    }

return 0;

}
