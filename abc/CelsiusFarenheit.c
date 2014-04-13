#include <stdio.h>
#include <stdlib.h>

int main()
{
	float c,f;
	printf("\nInforme graus celsius\n");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("\nO resultado em farenheit: %f \n",f);

	return 0;
}
