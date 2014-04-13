#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a,b,t;
	printf("\nDigite o Primeiro Numero: ");
	scanf("%d",&a);
	printf("\nDigite o Segundo Numero: ");
	scanf("%d",&b);
	if (a > b){
		t = a;
		a = b;
		b = t;
	}
	printf("\nOrdenados: %d e %d \n",a,b);
}


