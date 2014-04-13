#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf ("\n Digite um numero:\n");
	scanf ("%d",&num);
	if((num%2)==0){
		printf ("\n O numero: %d he par\n",num);
	}else{
		printf ("\n O numero: %d he impar\n",num);
	}

	return 0;
}
