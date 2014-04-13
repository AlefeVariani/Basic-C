#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf ("\nInforme um numero:\n");
	scanf ("%d",&num);

	if (num>0){
		printf ("\n O numero %d he positivo:\n",num);
	}else{
        printf("\n O numero %d he negativo:\n",num);
    }
	return 0;
}
