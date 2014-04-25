#include <stdio.h>

int main(){

    int vet[12], i;
    int x, y;

    for(i = 0; i <= 12; i++ ) {
        printf("INFORME VALOR PARA VETOR: ");
        scanf("%d", &vet[i]);

    }

    printf("Informe X: ");
    scanf("%d", &x);

    printf("\nInforme Y: ");
    scanf("%d", &y);

    printf("O resultado eh %d", vet[x]+vet[y]);

 return 0;
}
