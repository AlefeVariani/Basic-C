#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i=0, j=0, mat[20][20],x;

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){

			printf("informe valores da matriz\n");
			scanf("%d",&mat[i][j]);
		}
	}

	printf("informe valor\n");
	scanf("%d",&x);

	for(i=0;i<20;i++){
		for(j=0;j<20;j++){
			if(x==mat[i][j]);

			printf("\nValor encontrado eh: %d\n",x);
			printf("\nValor encontrado esta na linha %d e coluna %d\n", mat[i][j]);

		}
	}
	return 0;
}
