#include <stdio.h>

int main()
{

int mat[2][2];
int x, y,a;

for(x=0;x<2;x++){
    for(y=0;y<2;y++){
        printf("informe valores da matriz\n");
        scanf("%d",&mat[x][y]);
    }
}
printf("informe valor\n");
	scanf("%d",&a);

for(x=0;x<2;x++){
		for(y=0;y<2;y++){
            if(a==mat[x][y]);
                printf("\nValor encontrado eh: %d\n",a);
                printf("\nValor encontrado esta na linha %d e coluna %d \n", mat[x][y]);

	}
}

return 0;
}
