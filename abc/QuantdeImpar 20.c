#include <stdio.h>
#include <stdlib.h>

int main(){
	int x,cont=0,n;

	printf("\nInforme 20 numeros:\n");

	for(x=1;x<20;x++)
	{
		scanf("%d",&n);
		if((n%2)!=0)
		{
			cont=cont+1;
		}
	}
	printf("\nQuantidade de impar he %d:\n",cont);

	return 0;
}
