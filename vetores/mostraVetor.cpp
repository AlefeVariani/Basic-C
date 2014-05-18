#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vet[5],i;

	printf("Informe valores do vetor\n");
	for(i=0;i<5;i++){
		scanf("%d",&vet[i]);
		
		if (vet[i]<0){
			vet[i]=0;
		}
	}

	printf("vetor.\n");
	
	for(i=0;i<5;i++){
		printf("%d\n",vet[i]);

	}
	return 0;
}
