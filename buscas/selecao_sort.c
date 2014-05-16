/* MÉTODO DE ORDENAÇÃO POR SELEÇÃO */

#include <stdio.h>

int main()
{
	int vetor[100], tamVet, c, d, posicao, swap;

/*------- PERCORRE O VETOR -------*/
	printf("Entre com um tamanho para a vetor: \n");
	scanf("%d", &tamVet);

	printf("Informe %d inteiros:\n", tamVet);

	for ( c = 0 ; c < tamVet ; c++ )
		scanf("%d", &vetor[c]);

/*------- COMPARA POSIÇÃO NO VETOR -------*/
	for ( c = 0 ; c < ( tamVet - 1 ) ; c++ )
	{
		posicao = c;
		for ( d = c + 1 ; d < tamVet ; d++ )
		{
			if ( vetor[posicao] > vetor[d] )
				posicao = d;
		}
		if ( posicao != c )
		{
			swap = vetor[c];
			vetor[c] = vetor[posicao];
			vetor[posicao] = swap;
		}
	}
	
/*-------- MOSTRA A LISTA ORDENADA ------*/
	printf("A lista ordenada eh:\n");
	for ( c = 0 ; c < tamVet ; c++ )
		printf("%d\n", vetor[c]);

	return 0;
}
