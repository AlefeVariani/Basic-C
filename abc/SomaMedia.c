#include <stdio.h>
#include <stdlib.h>

int main()
{
	float media=0;
	float soma=0;
	float num=5;
	int i=0;

	while(num>3){

		printf("\nDigite um numero: \n");
		scanf("%f",&num);
		soma = soma+num;
		i++;
	}
    printf ("\nA soma eh: %f\n", soma);
	media = soma/num;
	printf("\nA media he: %f\n",media);

}
