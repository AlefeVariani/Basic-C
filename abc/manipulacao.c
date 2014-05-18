#include <stdio.h>
#include <stdlib.h>

int main()
{

	int x[5];
	int i;
	int cont = 0;
	int *vet = x;

	for (i=0; i < 5; i++){
		x[i]= i*10;

	}

	while (cont < 5){
		printf("%d\n", *vet);
		cont++;
		vet++;
	}

	return 0;
}


