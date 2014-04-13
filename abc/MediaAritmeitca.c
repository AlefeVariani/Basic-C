#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,cont=0,soma=0;
	float media;
	printf("\nInforme valore:\n");
	scanf("%d",&x);
	while(x>=0){

		cont++;
		soma+=x;
		printf("\nInforme valore:\n");
		scanf("%d",&x);
	}
	printf("\nA media aritmetica eh:%.2f",(float)soma/cont);
	media=(float)soma/cont;
	printf("\nA media aritmetica eh:%.2d",cont);

	return 0;
}
