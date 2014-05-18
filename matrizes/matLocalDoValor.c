#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, j, num, mat[2][2],aux=0;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nInforme valores da matriz\n");
			scanf("%d",&mat[i][j]);
		}
	}

	printf("\nInforme um valor\n");
	scanf("%d",&num);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){

			if(num==mat[i][j]){
				aux=1;
				printf("\nO valor: %d\n",num);
				printf("\n\4Esta localizado linha %d e coluna %d \n",i,j);
			}

		}
	}
	if(aux==0){
		printf("Valor nao encontrado\n");
	}

	return 0;
}

