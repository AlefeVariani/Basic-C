#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, tam, maior=0;
	int *vet;

	printf("digite o tamanho do vetor:");
	scanf("%d",&tam);

	vet = (int *) malloc (tam * sizeof(int));

	for(i=0; i < tam; i++){
		printf("Informe VET [%d]: ", i);
		scanf("d", &vet[i]);
	}

	i=0;
	while(i < tam){
		if(*vet > maior){
			maior = *vet;
		}
		i++;
		vet++;
	}

	printf(" o maior eh: %d\n ", maior);

	return 0;
}
