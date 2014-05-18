#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j, num, vet[5];
	
	for(i=0;i<5;i++){
		printf("\nInforme vetor posicao [%d]\n",i);
		scanf("%d",&vet[i]);
		
	}
	
	for(i=0;i<5;i++){
		num=vet[i];             
		for(j=i+1;j<6;j++){              
			if(vet[j]==num){
				
				printf("\nOs valores repetidos sao: %d \n",vet[j]);                            
			}
		}  
	}
	
	return 0;
}
