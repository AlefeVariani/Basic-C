#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i,aux,vet[16];
	
	for(i=0;i<16;++i){
		printf("\n Informe valor\n");
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<8;++i){
		aux=vet[i];
		vet[i]=vet[i+8];
		vet[i+8]=aux;
		
	}
	for (i=0;i<16;++i){
		printf("O vetor obtido foi: %d\n",vet[i]);
	}

	return 0;
}
