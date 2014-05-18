#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, q;
	float pr, total_gasto=0;
	
	for(i=0;i<45;i++){
		printf("\nInforme quantidade de produtos\n");
		scanf("%d",&q);
		
		printf("\nInforme preco dos  produtos\n");               
		scanf("%f",&pr);
		
		total_gasto=total_gasto + q * pr;
		
	}
	
	printf("\nTotal gasto pela empresa: %f\n",total_gasto);
	
	return 0;
}
