#include <stdio.h>
#include <stdlib.h>

int main()
{
	float preco, total;
	int quant;
	char resp;
	total=0;
	
	do{
		printf("informe o preco\n");
		scanf("%f",&preco);
		
		total=total+quant*preco;
		
		printf("total parcial da conta:%f\n",total);
		
		printf("informe a quantidade do produto");
		scanf("%d",&quant);
	}while(quant);
	
	printf("total da conta:%0.2f\n",total);
	
	return 0;  
}
