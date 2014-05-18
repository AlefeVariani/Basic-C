#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, vet[12], soma, x=0, y=0;
	
	for(i=1;i<12;i++){
		printf("\nInforme as posicoes do vetor [%d]\n",i);
		scanf("%d",&vet[i]);
	}
	
	printf("Informe dois valores do vetor\n");
	scanf("%d %d",&x ,&y);
	
	soma=vet[x] + vet[y];
	
	printf("\nA soma eh: %d\n",soma);                
	printf("\nA posicao de x eh: %d\n",vet[x]); 
	printf("\nA posicao de y eh: %d\n",vet[y]); 
	
	return 0;
}
